<?php
/**
 * @file
 * custom_content_page.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function custom_content_page_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-page-field_image'.
  $field_instances['node-page-field_image'] = array(
    'bundle' => 'page',
    'deleted' => 0,
    'description' => 'It is recommended to reduce the quality of the image, significantly to reduce loading time.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'custom_content_image',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'epsacrop' => array(
        'styles' => array(
          'custom_audio_image' => 0,
          'custom_content_image' => 'custom_content_image',
          'custom_employee_image' => 0,
          'portfolio_small' => 0,
          'profile_image_default' => 0,
          'profile_image_extra_large' => 0,
          'profile_image_large' => 0,
          'profile_image_mini' => 0,
          'profile_image_small' => 0,
        ),
      ),
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '5 MB',
      'max_resolution' => '',
      'min_resolution' => '1400x450',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 0,
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_internet' => 0,
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-page-field_paragraphs'.
  $field_instances['node-page-field_paragraphs'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
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
    'field_name' => 'field_paragraphs',
    'label' => 'Paragraphs',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'content_action_box' => -1,
        'content_audio_playlist' => -1,
        'content_body' => -1,
        'content_call_to_action' => -1,
        'content_portfolio_stacked' => -1,
        'content_soundcloud' => -1,
        'content_statement_dual' => -1,
        'content_statement_single' => -1,
        'layout_1_column' => 'layout_1_column',
        'layout_2_columns' => 'layout_2_columns',
        'layout_3_columns' => 'layout_3_columns',
        'layout_4_columns' => 'layout_4_columns',
      ),
      'bundle_weights' => array(
        'content_action_box' => 10,
        'content_audio_playlist' => 19,
        'content_body' => 20,
        'content_call_to_action' => 21,
        'content_portfolio_stacked' => 22,
        'content_soundcloud' => 4,
        'content_statement_dual' => 24,
        'content_statement_single' => -24,
        'layout_1_column' => 5,
        'layout_2_columns' => 6,
        'layout_3_columns' => 7,
        'layout_4_columns' => 16,
      ),
      'default_edit_mode' => 'closed',
      'entity_translation_sync' => FALSE,
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-page-field_subheading'.
  $field_instances['node-page-field_subheading'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_subheading',
    'label' => 'Subheading',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'full_html' => 0,
          'plain_text' => 0,
          'simple' => 'simple',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'simple' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Søg',
        'enable' => 0,
        'profile' => '',
      ),
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
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Image');
  t('It is recommended to reduce the quality of the image, significantly to reduce loading time.');
  t('Paragraphs');
  t('Subheading');

  return $field_instances;
}
