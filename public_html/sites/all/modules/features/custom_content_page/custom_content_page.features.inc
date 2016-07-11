<?php
/**
 * @file
 * custom_content_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function custom_content_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function custom_content_page_image_default_styles() {
  $styles = array();

  // Exported image style: custom_content_image.
  $styles['custom_content_image'] = array(
    'label' => 'Custom - content image',
    'effects' => array(
      13 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 1400,
          'height' => 450,
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
      14 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1400,
          'height' => 450,
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
function custom_content_page_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Indholdsside'),
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
