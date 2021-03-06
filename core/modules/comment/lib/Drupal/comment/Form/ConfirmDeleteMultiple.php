<?php

/**
 * @file
 * Contains \Drupal\comment\Form\DeleteConfirmMultiple.
 */

namespace Drupal\comment\Form;

use Drupal\comment\CommentStorageControllerInterface;
use Drupal\Component\Utility\String;
use Drupal\Core\Cache\Cache;
use Drupal\Core\DependencyInjection\ContainerInjectionInterface;
use Drupal\Core\Form\ConfirmFormBase;
use Symfony\Component\DependencyInjection\ContainerInterface;
use Symfony\Component\HttpFoundation\Request;

/**
 * Provides the comment multiple delete confirmation form.
 */
class ConfirmDeleteMultiple extends ConfirmFormBase implements ContainerInjectionInterface {

  /**
   * The comment storage.
   *
   * @var \Drupal\comment\CommentStorageControllerInterface
   */
  protected $commentStorage;

  /**
   * An array of comments to be deleted.
   *
   * @var \Drupal\comment\CommentInterface[]
   */
  protected $comments;

  /**
   * Creates an new ConfirmDeleteMultiple form.
   *
   * @param \Drupal\comment\CommentStorageControllerInterface $comment_storage
   *   The comment storage.
   */
  public function __construct(CommentStorageControllerInterface $comment_storage) {
    $this->commentStorage = $comment_storage;
  }

  /**
   * {@inheritdoc}
   */
  public static function create(ContainerInterface $container) {
    return new static(
      $container->get('entity.manager')->getStorageController('comment')
    );
  }

  /**
   * {@inheritdoc}
   */
  public function getFormID() {
    return 'comment_multiple_delete_confirm';
  }

  /**
   * {@inheritdoc}
   */
  public function getQuestion() {
    return $this->t('Are you sure you want to delete these comments and all their children?');
  }

  /**
   * {@inheritdoc}
   */
  public function getCancelRoute() {
  }

  /**
   * {@inheritdoc}
   */
  public function getConfirmText() {
    return $this->t('Delete comments');
  }

  /**
   * {@inheritdoc}
   */
  public function buildForm(array $form, array &$form_state, Request $request = NULL) {
    $edit = $form_state['input'];

    $form['comments'] = array(
      '#prefix' => '<ul>',
      '#suffix' => '</ul>',
      '#tree' => TRUE,
    );
    // array_filter() returns only elements with actual values.
    $comment_counter = 0;
    $this->comments = $this->commentStorage->loadMultiple(array_keys(array_filter($edit['comments'])));
    foreach ($this->comments as $comment) {
      $cid = $comment->id();
      $form['comments'][$cid] = array(
        '#type' => 'hidden',
        '#value' => $cid,
        '#prefix' => '<li>',
        '#suffix' => String::checkPlain($comment->label()) . '</li>'
      );
      $comment_counter++;
    }
    $form['operation'] = array('#type' => 'hidden', '#value' => 'delete');

    if (!$comment_counter) {
      drupal_set_message($this->t('There do not appear to be any comments to delete, or your selected comment was deleted by another administrator.'));
      $form_state['redirect'] = 'admin/content/comment';
    }

    $form = parent::buildForm($form, $form_state);

    // @todo Convert to getCancelRoute() after http://drupal.org/node/1986606.
    $form['actions']['cancel']['#href'] = 'admin/content/comment';
    return $form;
  }

  /**
   * {@inheritdoc}
   */
  public function submitForm(array &$form, array &$form_state) {
    if ($form_state['values']['confirm']) {
      $this->commentStorage->delete($this->comments);
      Cache::invalidateTags(array('content' => TRUE));
      $count = count($form_state['values']['comments']);
      watchdog('content', 'Deleted @count comments.', array('@count' => $count));
      drupal_set_message(format_plural($count, 'Deleted 1 comment.', 'Deleted @count comments.'));
    }
    $form_state['redirect'] = 'admin/content/comment';
  }

}
