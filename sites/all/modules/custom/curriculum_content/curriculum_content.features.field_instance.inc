<?php
/**
 * @file
 * curriculum_content.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function curriculum_content_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-curriculum_content-body'
  $field_instances['node-curriculum_content-body'] = array(
    'bundle' => 'curriculum_content',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Using no more than 50 words, please write an “invitation-pitch” for this activity to the campers.  What can they expect to do and learn?  ',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-curriculum_content-field_activity_explanation'
  $field_instances['node-curriculum_content-field_activity_explanation'] = array(
    'bundle' => 'curriculum_content',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<ol>
<li>Describe any instructions on how to play/participate in the activity or experiential learning.
<li>What should the facilitator/leader be saying to the group?
<li>What are the “rules of the game”?
<li>Please include the length of time the leader should allow the activity to go on.
</ol>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_activity_explanation',
    'label' => 'Explanation',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 8,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-curriculum_content-field_activity_wrapup'
  $field_instances['node-curriculum_content-field_activity_wrapup'] = array(
    'bundle' => 'curriculum_content',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '</ol>
<li>Describe how the leader should close/wrap up this activity.
<li>What are the lasting thoughts we want the kids to take away?
<li>What connections to Israel do we want to be sure we have made.
</ol>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_activity_wrapup',
    'label' => 'Wrap-Up',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 8,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-curriculum_content-field_background'
  $field_instances['node-curriculum_content-field_background'] = array(
    'bundle' => 'curriculum_content',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Material knowledge for staff suggested or required for program implantation.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_background',
    'label' => 'Background Information',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-curriculum_content-field_central_ideas'
  $field_instances['node-curriculum_content-field_central_ideas'] = array(
    'bundle' => 'curriculum_content',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_central_ideas',
    'label' => 'Essential Questions',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 100,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-curriculum_content-field_core_learnings'
  $field_instances['node-curriculum_content-field_core_learnings'] = array(
    'bundle' => 'curriculum_content',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please list 1-3 core learnings we want the campers to take away from this activity (click "add another item" for each discrete learning objective).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_core_learnings',
    'label' => 'Core Learnings',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 100,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-curriculum_content-field_images'
  $field_instances['node-curriculum_content-field_images'] = array(
    'bundle' => 'curriculum_content',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'preview',
        ),
        'type' => 'file_rendered',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_images',
    'label' => 'Supporting Images',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'supporting_images',
      'file_extensions' => 'jpg jpeg png gif',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          'youtube' => 'youtube',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 'video',
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
          'youtube' => 0,
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-curriculum_content-field_materials'
  $field_instances['node-curriculum_content-field_materials'] = array(
    'bundle' => 'curriculum_content',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please choose all the necessary equipment and materials needed to facilitate this activity successfully (you may add new materials to the list, but do so only after looking at the entire list). ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_materials',
    'label' => 'Materials Required',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-curriculum_content-field_subjects'
  $field_instances['node-curriculum_content-field_subjects'] = array(
    'bundle' => 'curriculum_content',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_subjects',
    'label' => 'Curricular Subjects',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-curriculum_content-field_supporting_materials'
  $field_instances['node-curriculum_content-field_supporting_materials'] = array(
    'bundle' => 'curriculum_content',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_supporting_materials',
    'label' => 'Supporting Materials',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => '',
      'file_extensions' => 'pdf doc docx',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
        'allowed_types' => array(
          0 => 'image',
        ),
        'browser_plugins' => array(),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-curriculum_content-field_supporting_web_resources'
  $field_instances['node-curriculum_content-field_supporting_web_resources'] = array(
    'bundle' => 'curriculum_content',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_supporting_web_resources',
    'label' => 'Supporting Web Resources',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'required',
      'title_maxlength' => 255,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 13,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('</ol>
<li>Describe how the leader should close/wrap up this activity.
<li>What are the lasting thoughts we want the kids to take away?
<li>What connections to Israel do we want to be sure we have made.
</ol>');
  t('<ol>
<li>Describe any instructions on how to play/participate in the activity or experiential learning.
<li>What should the facilitator/leader be saying to the group?
<li>What are the “rules of the game”?
<li>Please include the length of time the leader should allow the activity to go on.
</ol>');
  t('Background Information');
  t('Core Learnings');
  t('Curricular Subjects');
  t('Description');
  t('Essential Questions');
  t('Explanation');
  t('Material knowledge for staff suggested or required for program implantation.');
  t('Materials Required');
  t('Please choose all the necessary equipment and materials needed to facilitate this activity successfully (you may add new materials to the list, but do so only after looking at the entire list). ');
  t('Please list 1-3 core learnings we want the campers to take away from this activity (click "add another item" for each discrete learning objective).');
  t('Supporting Images');
  t('Supporting Materials');
  t('Supporting Web Resources');
  t('Using no more than 50 words, please write an “invitation-pitch” for this activity to the campers.  What can they expect to do and learn?  ');
  t('Wrap-Up');

  return $field_instances;
}
