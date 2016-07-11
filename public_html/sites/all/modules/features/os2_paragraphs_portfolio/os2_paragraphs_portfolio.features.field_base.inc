<?php
/**
 * @file
 * os2_paragraphs_portfolio.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function os2_paragraphs_portfolio_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_logo'.
  $field_bases['field_logo'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_logo',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_portfolio_view'.
  $field_bases['field_portfolio_view'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_portfolio_view',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_embed_views',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'field_embed_views',
  );

  return $field_bases;
}
