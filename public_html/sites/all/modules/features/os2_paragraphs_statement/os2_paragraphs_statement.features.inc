<?php
/**
 * @file
 * os2_paragraphs_statement.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2_paragraphs_statement_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2_paragraphs_statement_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function os2_paragraphs_statement_node_info() {
  $items = array(
    'testimonial' => array(
      'name' => t('Udtalelse'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Heading'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function os2_paragraphs_statement_paragraphs_info() {
  $items = array(
    'content_statement_dual' => array(
      'name' => 'Statement - dual',
      'bundle' => 'content_statement_dual',
      'locked' => '1',
    ),
    'content_statement_single' => array(
      'name' => 'Statement - single',
      'bundle' => 'content_statement_single',
      'locked' => '1',
    ),
  );
  return $items;
}
