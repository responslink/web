<?php
/**
 * @file
 * os2_paragraphs_layout.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2_paragraphs_layout_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function os2_paragraphs_layout_paragraphs_info() {
  $items = array(
    'layout_1_column' => array(
      'name' => '1 column',
      'bundle' => 'layout_1_column',
      'locked' => '1',
    ),
    'layout_2_columns' => array(
      'name' => '2 columns',
      'bundle' => 'layout_2_columns',
      'locked' => '1',
    ),
    'layout_3_columns' => array(
      'name' => '3 columns',
      'bundle' => 'layout_3_columns',
      'locked' => '1',
    ),
    'layout_4_columns' => array(
      'name' => '4 columns',
      'bundle' => 'layout_4_columns',
      'locked' => '1',
    ),
  );
  return $items;
}
