<?php
/**
 * @file
 * os2_paragraphs_audio.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2_paragraphs_audio_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2_paragraphs_audio_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function os2_paragraphs_audio_image_default_styles() {
  $styles = array();

  // Exported image style: custom_audio_image.
  $styles['custom_audio_image'] = array(
    'label' => 'Custom - audio image',
    'effects' => array(
      11 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 220,
          'height' => 130,
          'anchor' => 'center-center',
          'disable_scale' => 0,
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 0,
          ),
        ),
        'weight' => 1,
      ),
      12 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 130,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function os2_paragraphs_audio_node_info() {
  $items = array(
    'audio' => array(
      'name' => t('Lyd'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
