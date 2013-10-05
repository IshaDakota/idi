<?php
/**
 * @file
 * curriculum_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function curriculum_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function curriculum_content_node_info() {
  $items = array(
    'curriculum_content' => array(
      'name' => t('Curriculum Content'),
      'base' => 'node_content',
      'description' => t('Curriculum Content for the Goodman Initiative'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
