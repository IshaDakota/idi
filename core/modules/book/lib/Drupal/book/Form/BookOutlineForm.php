<?php

/**
 * @file
 * Contains \Drupal\book\Form\BookOutlineForm.
 */

namespace Drupal\book\Form;

use Drupal\Core\Entity\EntityFormControllerNG;
use Drupal\book\BookManager;
use Symfony\Component\DependencyInjection\ContainerInterface;

/**
 * Displays the book outline form.
 */
class BookOutlineForm extends EntityFormControllerNG {

  /**
   * The book being displayed.
   *
   * @var \Drupal\node\NodeInterface
   */
  protected $entity;

  /**
   * BookManager service.
   *
   * @var \Drupal\book\BookManager
   */
  protected $bookManager;

  /**
   * Constructs a BookOutlineForm object.
   */
  public function __construct(BookManager $bookManager) {
    $this->bookManager = $bookManager;
  }

  /**
   * This method lets us inject the services this class needs.
   *
   * Only inject services that are actually needed. Which services
   * are needed will vary by the controller.
   */
  public static function create(ContainerInterface $container) {
    return new static($container->get('book.manager'));
  }

  /**
   * {@inheritdoc}
   */
  public function getBaseFormID() {
    return FALSE;
  }

  /**
   * {@inheritdoc}
   */
  public function form(array $form, array &$form_state) {
    $form['#title'] = $this->entity->label();

    if (!isset($this->entity->book)) {
      // The node is not part of any book yet - set default options.
      $this->entity->book = $this->bookManager->getLinkDefaults($this->entity->id());
    }
    else {
      $this->entity->book['original_bid'] = $this->entity->book['bid'];
    }

    // Find the depth limit for the parent select.
    if (!isset($this->entity->book['parent_depth_limit'])) {
      $this->entity->book['parent_depth_limit'] = $this->bookManager->getParentDepthLimit($this->entity->book);
    }
    $form = $this->bookManager->addFormElements($form, $form_state, $this->entity, $this->currentUser());

    return $form;
  }

  /**
   * {@inheritdoc}
   */
  protected function actions(array $form, array &$form_state) {
    $actions = parent::actions($form, $form_state);
    $actions['submit']['#value'] = $this->entity->book['original_bid'] ? $this->t('Update book outline') : $this->t('Add to book outline');
    $actions['delete']['#value'] = $this->t('Remove from book outline');
    $actions['delete']['#access'] = $this->bookManager->checkNodeIsRemovable($this->entity);
    return $actions;
  }

  /**
   * {@inheritdoc}
   *
   * @see book_remove_button_submit()
   */
  public function submit(array $form, array &$form_state) {
    $form_state['redirect'] = 'node/' . $this->entity->id();
    $book_link = $form_state['values']['book'];
    if (!$book_link['bid']) {
      drupal_set_message($this->t('No changes were made'));
      return;
    }

    $book_link['menu_name'] = $this->bookManager->createMenuName($book_link['bid']);
    $this->entity->book = $book_link;
    if ($this->bookManager->updateOutline($this->entity)) {
      if ($this->entity->book['parent_mismatch']) {
        // This will usually only happen when JS is disabled.
        drupal_set_message($this->t('The post has been added to the selected book. You may now position it relative to other pages.'));
        $form_state['redirect'] = 'node/' . $this->entity->id() . '/outline';
      }
      else {
        drupal_set_message($this->t('The book outline has been updated.'));
      }
    }
    else {
      drupal_set_message($this->t('There was an error adding the post to the book.'), 'error');
    }
  }

  /**
   * {@inheritdoc}
   */
  public function delete(array $form, array &$form_state) {
    $form_state['redirect'] = 'node/' . $this->entity->id() . '/outline/remove';
  }

}
