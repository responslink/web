<?php
/**
 * @file
 * os2_paragraphs_body.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function os2_paragraphs_body_paragraphs_info() {
  $items = array(
    'content_body' => array(
      'name' => 'Body',
      'bundle' => 'content_body',
      'locked' => '1',
    ),
  );
  return $items;
}
