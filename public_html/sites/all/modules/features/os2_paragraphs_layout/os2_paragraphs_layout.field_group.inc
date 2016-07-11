<?php
/**
 * @file
 * os2_paragraphs_layout.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function os2_paragraphs_layout_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_1|paragraphs_item|layout_1_column|form';
  $field_group->group_name = 'group_column_1';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'layout_1_column';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_column_wrapper';
  $field_group->data = array(
    'label' => 'Column 1',
    'weight' => '6',
    'children' => array(
      0 => 'field_col1_paragraphs',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Column 1',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-column-1 field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_column_1|paragraphs_item|layout_1_column|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_1|paragraphs_item|layout_2_columns|form';
  $field_group->group_name = 'group_column_1';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'layout_2_columns';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_column_wrapper';
  $field_group->data = array(
    'label' => 'Column 1',
    'weight' => '5',
    'children' => array(
      0 => 'field_col1_paragraphs',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Column 1',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-column-1 field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_column_1|paragraphs_item|layout_2_columns|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_1|paragraphs_item|layout_3_columns|form';
  $field_group->group_name = 'group_column_1';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'layout_3_columns';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_column_wrapper';
  $field_group->data = array(
    'label' => 'Column 1',
    'weight' => '9',
    'children' => array(
      0 => 'field_col1_paragraphs',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Column 1',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-column-1 field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_column_1|paragraphs_item|layout_3_columns|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_1|paragraphs_item|layout_4_columns|form';
  $field_group->group_name = 'group_column_1';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'layout_4_columns';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_column_wrapper';
  $field_group->data = array(
    'label' => 'Column 1',
    'weight' => '4',
    'children' => array(
      0 => 'field_col1_paragraphs',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-column-1 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_column_1|paragraphs_item|layout_4_columns|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_2|paragraphs_item|layout_2_columns|form';
  $field_group->group_name = 'group_column_2';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'layout_2_columns';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_column_wrapper';
  $field_group->data = array(
    'label' => 'Column 2',
    'weight' => '6',
    'children' => array(
      0 => 'field_col2_paragraphs',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-column-2 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_column_2|paragraphs_item|layout_2_columns|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_2|paragraphs_item|layout_3_columns|form';
  $field_group->group_name = 'group_column_2';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'layout_3_columns';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_column_wrapper';
  $field_group->data = array(
    'label' => 'Column 2',
    'weight' => '10',
    'children' => array(
      0 => 'field_col2_paragraphs',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-column-2 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_column_2|paragraphs_item|layout_3_columns|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_2|paragraphs_item|layout_4_columns|form';
  $field_group->group_name = 'group_column_2';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'layout_4_columns';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_column_wrapper';
  $field_group->data = array(
    'label' => 'Column 2',
    'weight' => '5',
    'children' => array(
      0 => 'field_col2_paragraphs',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-column-2 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_column_2|paragraphs_item|layout_4_columns|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_3|paragraphs_item|layout_3_columns|form';
  $field_group->group_name = 'group_column_3';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'layout_3_columns';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_column_wrapper';
  $field_group->data = array(
    'label' => 'Column 3',
    'weight' => '11',
    'children' => array(
      0 => 'field_col3_paragraphs',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-column-3 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_column_3|paragraphs_item|layout_3_columns|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_3|paragraphs_item|layout_4_columns|form';
  $field_group->group_name = 'group_column_3';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'layout_4_columns';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_column_wrapper';
  $field_group->data = array(
    'label' => 'Column 3',
    'weight' => '6',
    'children' => array(
      0 => 'field_col3_paragraphs',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-column-3 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_column_3|paragraphs_item|layout_4_columns|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_4|paragraphs_item|layout_4_columns|form';
  $field_group->group_name = 'group_column_4';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'layout_4_columns';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_column_wrapper';
  $field_group->data = array(
    'label' => 'Column 4',
    'weight' => '7',
    'children' => array(
      0 => 'field_col4_paragraphs',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-column-4 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_column_4|paragraphs_item|layout_4_columns|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_wrapper|paragraphs_item|layout_1_column|form';
  $field_group->group_name = 'group_column_wrapper';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'layout_1_column';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '4',
    'children' => array(
      0 => 'group_column_1',
      1 => 'group_general',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-column-wrapper field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_column_wrapper|paragraphs_item|layout_1_column|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_wrapper|paragraphs_item|layout_2_columns|form';
  $field_group->group_name = 'group_column_wrapper';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'layout_2_columns';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_column_1',
      1 => 'group_column_2',
      2 => 'group_general',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-column-wrapper field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_column_wrapper|paragraphs_item|layout_2_columns|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_wrapper|paragraphs_item|layout_3_columns|form';
  $field_group->group_name = 'group_column_wrapper';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'layout_3_columns';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'group_column_1',
      1 => 'group_column_2',
      2 => 'group_column_3',
      3 => 'group_general',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-column-wrapper field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_column_wrapper|paragraphs_item|layout_3_columns|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_wrapper|paragraphs_item|layout_4_columns|form';
  $field_group->group_name = 'group_column_wrapper';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'layout_4_columns';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'group_column_1',
      1 => 'group_column_2',
      2 => 'group_general',
      3 => 'group_column_3',
      4 => 'group_column_4',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-column-wrapper field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_column_wrapper|paragraphs_item|layout_4_columns|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_eb_image|field_collection_item|eb_background|form';
  $field_group->group_name = 'group_eb_image';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'eb_background';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => 0,
    'children' => array(
      0 => 'field_eb_image',
      1 => 'field_eb_image_style',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => '',
        'attributes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_eb_image|field_collection_item|eb_background|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_eb_parallax|field_collection_item|eb_background|form';
  $field_group->group_name = 'group_eb_parallax';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'eb_background';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Parallax',
    'weight' => 0,
    'children' => array(
      0 => 'field_eb_parallax_image',
      1 => 'field_eb_parallax_speed',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => '',
        'attributes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_eb_parallax|field_collection_item|eb_background|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|paragraphs_item|layout_1_column|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'layout_1_column';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_column_wrapper';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '5',
    'children' => array(
      0 => 'field_css_class',
      1 => 'field_heading',
      2 => 'field_subheading',
      3 => 'field_link',
      4 => 'eb_background',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'General',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_general|paragraphs_item|layout_1_column|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|paragraphs_item|layout_2_columns|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'layout_2_columns';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_column_wrapper';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '4',
    'children' => array(
      0 => 'field_heading',
      1 => 'field_subheading',
      2 => 'field_css_class',
      3 => 'field_link',
      4 => 'eb_background',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'General',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-general field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_general|paragraphs_item|layout_2_columns|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|paragraphs_item|layout_3_columns|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'layout_3_columns';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_column_wrapper';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '8',
    'children' => array(
      0 => 'field_heading',
      1 => 'field_subheading',
      2 => 'field_css_class',
      3 => 'field_link',
      4 => 'eb_background',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'General',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-general field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_general|paragraphs_item|layout_3_columns|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|paragraphs_item|layout_4_columns|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'layout_4_columns';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_column_wrapper';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '3',
    'children' => array(
      0 => 'field_css_class',
      1 => 'field_heading',
      2 => 'field_subheading',
      3 => 'field_link',
      4 => 'eb_background',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'General',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-general field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_general|paragraphs_item|layout_4_columns|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Column 1');
  t('Column 2');
  t('Column 3');
  t('Column 4');
  t('General');
  t('Image');
  t('Parallax');
  t('Wrapper');

  return $field_groups;
}
