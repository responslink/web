<?php
/**
 * @file
 * os2_paragraphs_layout.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function os2_paragraphs_layout_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-eb_background-eb_selection'.
  $field_instances['field_collection_item-eb_background-eb_selection'] = array(
    'bundle' => 'eb_background',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'eb_selection',
    'label' => 'Selection',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -50,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-eb_background-field_eb_image'.
  $field_instances['field_collection_item-eb_background-field_eb_image'] = array(
    'bundle' => 'eb_background',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_eb_image',
    'label' => 'Image',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-eb_background-field_eb_image_style'.
  $field_instances['field_collection_item-eb_background-field_eb_image_style'] = array(
    'bundle' => 'eb_background',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_eb_image_style',
    'label' => 'Style',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-eb_background-field_eb_parallax_image'.
  $field_instances['field_collection_item-eb_background-field_eb_parallax_image'] = array(
    'bundle' => 'eb_background',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_eb_parallax_image',
    'label' => 'Image',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-eb_background-field_eb_parallax_speed'.
  $field_instances['field_collection_item-eb_background-field_eb_parallax_speed'] = array(
    'bundle' => 'eb_background',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'You can enter a number between 0.1 and 1.0. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_eb_parallax_speed',
    'label' => 'Speed',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
          'simple' => 'simple',
        ),
        'allowed_formats_toggle' => 0,
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
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-layout_1_column-eb_background'.
  $field_instances['paragraphs_item-layout_1_column-eb_background'] = array(
    'bundle' => 'layout_1_column',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'eb_background',
    'label' => 'Background',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-layout_1_column-field_col1_paragraphs'.
  $field_instances['paragraphs_item-layout_1_column-field_col1_paragraphs'] = array(
    'bundle' => 'layout_1_column',
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
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_col1_paragraphs',
    'label' => 'Paragraphs',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'content_action_box' => -1,
        'content_audio_4_columns' => 'content_audio_4_columns',
        'content_audio_6_columns' => 'content_audio_6_columns',
        'content_audio_playlist' => -1,
        'content_body' => 'content_body',
        'content_call_to_action' => 'content_call_to_action',
        'content_employee_carousel' => 'content_employee_carousel',
        'content_portfolio_stacked' => -1,
        'content_statement_dual' => 'content_statement_dual',
        'content_statement_single' => -1,
        'layout_1_column' => -1,
        'layout_2_columns' => -1,
        'layout_3_columns' => -1,
        'layout_4_columns' => -1,
      ),
      'bundle_weights' => array(
        'content_action_box' => 10,
        'content_audio_4_columns' => 27,
        'content_audio_6_columns' => 28,
        'content_audio_playlist' => 24,
        'content_body' => 21,
        'content_call_to_action' => -20,
        'content_employee_carousel' => -24,
        'content_portfolio_stacked' => 11,
        'content_statement_dual' => 13,
        'content_statement_single' => 14,
        'layout_1_column' => 5,
        'layout_2_columns' => 6,
        'layout_3_columns' => 7,
        'layout_4_columns' => 18,
      ),
      'default_edit_mode' => 'open',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-layout_1_column-field_css_class'.
  $field_instances['paragraphs_item-layout_1_column-field_css_class'] = array(
    'bundle' => 'layout_1_column',
    'default_value' => array(
      0 => array(
        'value' => 'paragraphs-state-default',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_css_class',
    'label' => 'Choose theme',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'paragraphs_item-layout_1_column-field_heading'.
  $field_instances['paragraphs_item-layout_1_column-field_heading'] = array(
    'bundle' => 'layout_1_column',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_heading',
    'label' => 'Heading',
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'paragraphs_item-layout_1_column-field_link'.
  $field_instances['paragraphs_item-layout_1_column-field_link'] = array(
    'bundle' => 'layout_1_column',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link',
    'label' => 'Action link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'rel_remove' => 'default',
      'title' => 'required',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'advanced_link',
      'settings' => array(
        'default_titles' => '',
        'urls_allowed' => 'both',
        'urls_filter' => '',
        'urls_search' => 'contains',
      ),
      'type' => 'advanced_link',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-layout_1_column-field_subheading'.
  $field_instances['paragraphs_item-layout_1_column-field_subheading'] = array(
    'bundle' => 'layout_1_column',
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
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
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
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'paragraphs_item-layout_2_columns-eb_background'.
  $field_instances['paragraphs_item-layout_2_columns-eb_background'] = array(
    'bundle' => 'layout_2_columns',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'eb_background',
    'label' => 'Background',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-layout_2_columns-field_col1_paragraphs'.
  $field_instances['paragraphs_item-layout_2_columns-field_col1_paragraphs'] = array(
    'bundle' => 'layout_2_columns',
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
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_col1_paragraphs',
    'label' => 'Paragraphs',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'content_action_box' => 'content_action_box',
        'content_audio_3_columns' => 'content_audio_3_columns',
        'content_audio_4_columns' => 'content_audio_4_columns',
        'content_audio_6_columns' => -1,
        'content_audio_playlist' => -1,
        'content_body' => 'content_body',
        'content_call_to_action' => -1,
        'content_employee_carousel' => -1,
        'content_portfolio_stacked' => 'content_portfolio_stacked',
        'content_statement_dual' => 'content_statement_dual',
        'content_statement_single' => 'content_statement_single',
        'layout_1_column' => -1,
        'layout_2_columns' => -1,
        'layout_3_columns' => -1,
        'layout_4_columns' => -1,
      ),
      'bundle_weights' => array(
        'content_action_box' => 12,
        'content_audio_3_columns' => 27,
        'content_audio_4_columns' => 28,
        'content_audio_6_columns' => 29,
        'content_audio_playlist' => 24,
        'content_body' => 20,
        'content_call_to_action' => 21,
        'content_employee_carousel' => -30,
        'content_portfolio_stacked' => 17,
        'content_statement_dual' => -20,
        'content_statement_single' => -18,
        'layout_1_column' => 5,
        'layout_2_columns' => 6,
        'layout_3_columns' => 7,
        'layout_4_columns' => -18,
      ),
      'default_edit_mode' => 'open',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-layout_2_columns-field_col2_paragraphs'.
  $field_instances['paragraphs_item-layout_2_columns-field_col2_paragraphs'] = array(
    'bundle' => 'layout_2_columns',
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
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_col2_paragraphs',
    'label' => 'Paragraphs',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'content_action_box' => 'content_action_box',
        'content_audio_3_columns' => 'content_audio_3_columns',
        'content_audio_4_columns' => 'content_audio_4_columns',
        'content_audio_6_columns' => -1,
        'content_audio_playlist' => -1,
        'content_body' => 'content_body',
        'content_call_to_action' => -1,
        'content_employee_carousel' => -1,
        'content_portfolio_stacked' => 'content_portfolio_stacked',
        'content_statement_dual' => 'content_statement_dual',
        'content_statement_single' => 'content_statement_single',
        'layout_1_column' => -1,
        'layout_2_columns' => -1,
        'layout_3_columns' => -1,
        'layout_4_columns' => -1,
      ),
      'bundle_weights' => array(
        'content_action_box' => 12,
        'content_audio_3_columns' => 27,
        'content_audio_4_columns' => 28,
        'content_audio_6_columns' => 29,
        'content_audio_playlist' => 24,
        'content_body' => 20,
        'content_call_to_action' => 21,
        'content_employee_carousel' => -30,
        'content_portfolio_stacked' => 17,
        'content_statement_dual' => -22,
        'content_statement_single' => -18,
        'layout_1_column' => 5,
        'layout_2_columns' => 6,
        'layout_3_columns' => 7,
        'layout_4_columns' => -18,
      ),
      'default_edit_mode' => 'open',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-layout_2_columns-field_css_class'.
  $field_instances['paragraphs_item-layout_2_columns-field_css_class'] = array(
    'bundle' => 'layout_2_columns',
    'default_value' => array(
      0 => array(
        'value' => 'paragraphs-state-default',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_css_class',
    'label' => 'Choose theme',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'paragraphs_item-layout_2_columns-field_heading'.
  $field_instances['paragraphs_item-layout_2_columns-field_heading'] = array(
    'bundle' => 'layout_2_columns',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_heading',
    'label' => 'Heading',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-layout_2_columns-field_link'.
  $field_instances['paragraphs_item-layout_2_columns-field_link'] = array(
    'bundle' => 'layout_2_columns',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link',
    'label' => 'Action link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'rel_remove' => 'default',
      'title' => 'required',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'advanced_link',
      'settings' => array(
        'default_titles' => '',
        'urls_allowed' => 'both',
        'urls_filter' => '',
        'urls_search' => 'contains',
      ),
      'type' => 'advanced_link',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-layout_2_columns-field_subheading'.
  $field_instances['paragraphs_item-layout_2_columns-field_subheading'] = array(
    'bundle' => 'layout_2_columns',
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
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-layout_3_columns-eb_background'.
  $field_instances['paragraphs_item-layout_3_columns-eb_background'] = array(
    'bundle' => 'layout_3_columns',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'eb_background',
    'label' => 'Background',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-layout_3_columns-field_col1_paragraphs'.
  $field_instances['paragraphs_item-layout_3_columns-field_col1_paragraphs'] = array(
    'bundle' => 'layout_3_columns',
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
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_col1_paragraphs',
    'label' => 'Paragraphs',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'content_action_box' => 'content_action_box',
        'content_audio_1_column' => 'content_audio_1_column',
        'content_audio_3_columns' => 'content_audio_3_columns',
        'content_audio_4_columns' => -1,
        'content_audio_6_columns' => -1,
        'content_audio_playlist' => -1,
        'content_body' => 'content_body',
        'content_call_to_action' => -1,
        'content_employee_carousel' => -1,
        'content_portfolio_stacked' => 'content_portfolio_stacked',
        'content_statement_dual' => -1,
        'content_statement_single' => 'content_statement_single',
        'layout_1_column' => -1,
        'layout_2_columns' => -1,
        'layout_3_columns' => -1,
        'layout_4_columns' => -1,
      ),
      'bundle_weights' => array(
        'content_action_box' => 10,
        'content_audio_1_column' => 24,
        'content_audio_3_columns' => 25,
        'content_audio_4_columns' => 26,
        'content_audio_6_columns' => 27,
        'content_audio_playlist' => 28,
        'content_body' => 20,
        'content_call_to_action' => 21,
        'content_employee_carousel' => 31,
        'content_portfolio_stacked' => 12,
        'content_statement_dual' => -22,
        'content_statement_single' => -18,
        'layout_1_column' => 5,
        'layout_2_columns' => 6,
        'layout_3_columns' => 7,
        'layout_4_columns' => 17,
      ),
      'default_edit_mode' => 'open',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-layout_3_columns-field_col2_paragraphs'.
  $field_instances['paragraphs_item-layout_3_columns-field_col2_paragraphs'] = array(
    'bundle' => 'layout_3_columns',
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
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_col2_paragraphs',
    'label' => 'Paragraphs',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'content_action_box' => 'content_action_box',
        'content_audio_1_column' => 'content_audio_1_column',
        'content_audio_3_columns' => 'content_audio_3_columns',
        'content_audio_4_columns' => -1,
        'content_audio_6_columns' => -1,
        'content_audio_playlist' => -1,
        'content_body' => 'content_body',
        'content_call_to_action' => -1,
        'content_employee_carousel' => -1,
        'content_portfolio_stacked' => 'content_portfolio_stacked',
        'content_statement_dual' => -1,
        'content_statement_single' => 'content_statement_single',
        'layout_1_column' => -1,
        'layout_2_columns' => -1,
        'layout_3_columns' => -1,
        'layout_4_columns' => -1,
      ),
      'bundle_weights' => array(
        'content_action_box' => 10,
        'content_audio_1_column' => 24,
        'content_audio_3_columns' => 25,
        'content_audio_4_columns' => 26,
        'content_audio_6_columns' => 27,
        'content_audio_playlist' => 28,
        'content_body' => 20,
        'content_call_to_action' => 21,
        'content_employee_carousel' => 31,
        'content_portfolio_stacked' => 12,
        'content_statement_dual' => -22,
        'content_statement_single' => -18,
        'layout_1_column' => 5,
        'layout_2_columns' => 6,
        'layout_3_columns' => 7,
        'layout_4_columns' => 17,
      ),
      'default_edit_mode' => 'open',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-layout_3_columns-field_col3_paragraphs'.
  $field_instances['paragraphs_item-layout_3_columns-field_col3_paragraphs'] = array(
    'bundle' => 'layout_3_columns',
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
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_col3_paragraphs',
    'label' => 'Paragraphs',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'content_action_box' => 'content_action_box',
        'content_audio_1_column' => 'content_audio_1_column',
        'content_audio_3_columns' => 'content_audio_3_columns',
        'content_audio_4_columns' => -1,
        'content_audio_6_columns' => -1,
        'content_audio_playlist' => -1,
        'content_body' => 'content_body',
        'content_call_to_action' => -1,
        'content_employee_carousel' => -1,
        'content_portfolio_stacked' => 'content_portfolio_stacked',
        'content_statement_dual' => -1,
        'content_statement_single' => 'content_statement_single',
        'layout_1_column' => -1,
        'layout_2_columns' => -1,
        'layout_3_columns' => -1,
        'layout_4_columns' => -1,
      ),
      'bundle_weights' => array(
        'content_action_box' => 10,
        'content_audio_1_column' => 24,
        'content_audio_3_columns' => 25,
        'content_audio_4_columns' => 26,
        'content_audio_6_columns' => 27,
        'content_audio_playlist' => 28,
        'content_body' => 20,
        'content_call_to_action' => 21,
        'content_employee_carousel' => 31,
        'content_portfolio_stacked' => 12,
        'content_statement_dual' => -22,
        'content_statement_single' => -18,
        'layout_1_column' => 5,
        'layout_2_columns' => 6,
        'layout_3_columns' => 7,
        'layout_4_columns' => 17,
      ),
      'default_edit_mode' => 'open',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-layout_3_columns-field_css_class'.
  $field_instances['paragraphs_item-layout_3_columns-field_css_class'] = array(
    'bundle' => 'layout_3_columns',
    'default_value' => array(
      0 => array(
        'value' => 'paragraphs-state-default',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_css_class',
    'label' => 'Choose theme',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'paragraphs_item-layout_3_columns-field_heading'.
  $field_instances['paragraphs_item-layout_3_columns-field_heading'] = array(
    'bundle' => 'layout_3_columns',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_heading',
    'label' => 'Heading',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'paragraphs_item-layout_3_columns-field_link'.
  $field_instances['paragraphs_item-layout_3_columns-field_link'] = array(
    'bundle' => 'layout_3_columns',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link',
    'label' => 'Action link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'rel_remove' => 'default',
      'title' => 'required',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'advanced_link',
      'settings' => array(
        'default_titles' => '',
        'urls_allowed' => 'both',
        'urls_filter' => '',
        'urls_search' => 'contains',
      ),
      'type' => 'advanced_link',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-layout_3_columns-field_subheading'.
  $field_instances['paragraphs_item-layout_3_columns-field_subheading'] = array(
    'bundle' => 'layout_3_columns',
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
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'paragraphs_item-layout_4_columns-eb_background'.
  $field_instances['paragraphs_item-layout_4_columns-eb_background'] = array(
    'bundle' => 'layout_4_columns',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'eb_background',
    'label' => 'Background',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-layout_4_columns-field_col1_paragraphs'.
  $field_instances['paragraphs_item-layout_4_columns-field_col1_paragraphs'] = array(
    'bundle' => 'layout_4_columns',
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
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_col1_paragraphs',
    'label' => 'Paragraphs',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'content_action_box' => 'content_action_box',
        'content_audio_1_column' => 'content_audio_1_column',
        'content_audio_3_columns' => -1,
        'content_audio_4_columns' => -1,
        'content_audio_6_columns' => -1,
        'content_body' => 'content_body',
        'content_call_to_action' => -1,
        'content_employee_carousel' => -1,
        'content_portfolio_stacked' => 'content_portfolio_stacked',
        'content_statement_dual' => -1,
        'content_statement_single' => 'content_statement_single',
        'layout_1_column' => -1,
        'layout_2_columns' => -1,
        'layout_3_columns' => -1,
        'layout_4_columns' => -1,
      ),
      'bundle_weights' => array(
        'content_action_box' => 3,
        'content_audio_1_column' => 24,
        'content_audio_3_columns' => 25,
        'content_audio_4_columns' => 26,
        'content_audio_6_columns' => 27,
        'content_body' => 17,
        'content_call_to_action' => 18,
        'content_employee_carousel' => 30,
        'content_portfolio_stacked' => 14,
        'content_statement_dual' => 21,
        'content_statement_single' => -18,
        'layout_1_column' => 6,
        'layout_2_columns' => 7,
        'layout_3_columns' => 8,
        'layout_4_columns' => 9,
      ),
      'default_edit_mode' => 'open',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-layout_4_columns-field_col2_paragraphs'.
  $field_instances['paragraphs_item-layout_4_columns-field_col2_paragraphs'] = array(
    'bundle' => 'layout_4_columns',
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
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_col2_paragraphs',
    'label' => 'Paragraphs',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'content_action_box' => 'content_action_box',
        'content_audio_1_column' => 'content_audio_1_column',
        'content_audio_3_columns' => -1,
        'content_audio_4_columns' => -1,
        'content_audio_6_columns' => -1,
        'content_body' => 'content_body',
        'content_call_to_action' => -1,
        'content_employee_carousel' => -1,
        'content_portfolio_stacked' => 'content_portfolio_stacked',
        'content_statement_dual' => -1,
        'content_statement_single' => 'content_statement_single',
        'layout_1_column' => -1,
        'layout_2_columns' => -1,
        'layout_3_columns' => -1,
        'layout_4_columns' => -1,
      ),
      'bundle_weights' => array(
        'content_action_box' => 3,
        'content_audio_1_column' => 24,
        'content_audio_3_columns' => 25,
        'content_audio_4_columns' => 26,
        'content_audio_6_columns' => 27,
        'content_body' => 17,
        'content_call_to_action' => 18,
        'content_employee_carousel' => 30,
        'content_portfolio_stacked' => 14,
        'content_statement_dual' => 21,
        'content_statement_single' => -18,
        'layout_1_column' => 6,
        'layout_2_columns' => 7,
        'layout_3_columns' => 8,
        'layout_4_columns' => 9,
      ),
      'default_edit_mode' => 'open',
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
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-layout_4_columns-field_col3_paragraphs'.
  $field_instances['paragraphs_item-layout_4_columns-field_col3_paragraphs'] = array(
    'bundle' => 'layout_4_columns',
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
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_col3_paragraphs',
    'label' => 'Paragraphs',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'content_action_box' => 'content_action_box',
        'content_audio_1_column' => 'content_audio_1_column',
        'content_audio_3_columns' => -1,
        'content_audio_4_columns' => -1,
        'content_audio_6_columns' => -1,
        'content_body' => 'content_body',
        'content_call_to_action' => -1,
        'content_employee_carousel' => -1,
        'content_portfolio_stacked' => 'content_portfolio_stacked',
        'content_statement_dual' => -1,
        'content_statement_single' => 'content_statement_single',
        'layout_1_column' => -1,
        'layout_2_columns' => -1,
        'layout_3_columns' => -1,
        'layout_4_columns' => -1,
      ),
      'bundle_weights' => array(
        'content_action_box' => 3,
        'content_audio_1_column' => 24,
        'content_audio_3_columns' => 25,
        'content_audio_4_columns' => 26,
        'content_audio_6_columns' => 27,
        'content_body' => 17,
        'content_call_to_action' => 18,
        'content_employee_carousel' => 30,
        'content_portfolio_stacked' => 14,
        'content_statement_dual' => 21,
        'content_statement_single' => -18,
        'layout_1_column' => 6,
        'layout_2_columns' => 7,
        'layout_3_columns' => 8,
        'layout_4_columns' => 9,
      ),
      'default_edit_mode' => 'open',
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
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-layout_4_columns-field_col4_paragraphs'.
  $field_instances['paragraphs_item-layout_4_columns-field_col4_paragraphs'] = array(
    'bundle' => 'layout_4_columns',
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
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_col4_paragraphs',
    'label' => 'Paragraphs',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'content_action_box' => 'content_action_box',
        'content_audio_1_column' => 'content_audio_1_column',
        'content_audio_3_columns' => -1,
        'content_audio_4_columns' => -1,
        'content_audio_6_columns' => -1,
        'content_body' => 'content_body',
        'content_call_to_action' => -1,
        'content_employee_carousel' => -1,
        'content_portfolio_stacked' => 'content_portfolio_stacked',
        'content_statement_dual' => -1,
        'content_statement_single' => 'content_statement_single',
        'layout_1_column' => -1,
        'layout_2_columns' => -1,
        'layout_3_columns' => -1,
        'layout_4_columns' => -1,
      ),
      'bundle_weights' => array(
        'content_action_box' => 3,
        'content_audio_1_column' => 24,
        'content_audio_3_columns' => 25,
        'content_audio_4_columns' => 26,
        'content_audio_6_columns' => 27,
        'content_body' => 17,
        'content_call_to_action' => 18,
        'content_employee_carousel' => 30,
        'content_portfolio_stacked' => 14,
        'content_statement_dual' => 21,
        'content_statement_single' => -18,
        'layout_1_column' => 6,
        'layout_2_columns' => 7,
        'layout_3_columns' => 8,
        'layout_4_columns' => 9,
      ),
      'default_edit_mode' => 'open',
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
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-layout_4_columns-field_css_class'.
  $field_instances['paragraphs_item-layout_4_columns-field_css_class'] = array(
    'bundle' => 'layout_4_columns',
    'default_value' => array(
      0 => array(
        'value' => 'paragraphs-state-default',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_css_class',
    'label' => 'Choose theme',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'paragraphs_item-layout_4_columns-field_heading'.
  $field_instances['paragraphs_item-layout_4_columns-field_heading'] = array(
    'bundle' => 'layout_4_columns',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_heading',
    'label' => 'Heading',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-layout_4_columns-field_link'.
  $field_instances['paragraphs_item-layout_4_columns-field_link'] = array(
    'bundle' => 'layout_4_columns',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link',
    'label' => 'Action link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'rel_remove' => 'default',
      'title' => 'required',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'advanced_link',
      'settings' => array(
        'default_titles' => '',
        'urls_allowed' => 'both',
        'urls_filter' => '',
        'urls_search' => 'contains',
      ),
      'type' => 'advanced_link',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-layout_4_columns-field_subheading'.
  $field_instances['paragraphs_item-layout_4_columns-field_subheading'] = array(
    'bundle' => 'layout_4_columns',
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
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
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
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Action link');
  t('Background');
  t('Choose theme');
  t('Heading');
  t('Image');
  t('Paragraphs');
  t('Selection');
  t('Speed');
  t('Style');
  t('Subheading');
  t('You can enter a number between 0.1 and 1.0. ');

  return $field_instances;
}
