<?php
/**
 * @file
 * os2_paragraphs_action_box.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function os2_paragraphs_action_box_image_default_styles() {
  $styles = array();

  // Exported image style: action_box_icon.
  $styles['action_box_icon'] = array(
    'label' => 'Action box icon',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 180,
          'height' => 180,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_paragraphs_info().
 */
function os2_paragraphs_action_box_paragraphs_info() {
  $items = array(
    'content_action_box' => array(
      'name' => 'Action box',
      'bundle' => 'content_action_box',
      'locked' => '1',
    ),
  );
  return $items;
}
