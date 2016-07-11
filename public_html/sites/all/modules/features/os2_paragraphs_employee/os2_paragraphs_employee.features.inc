<?php
/**
 * @file
 * os2_paragraphs_employee.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2_paragraphs_employee_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2_paragraphs_employee_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function os2_paragraphs_employee_image_default_styles() {
  $styles = array();

  // Exported image style: custom_employee_image.
  $styles['custom_employee_image'] = array(
    'label' => 'Custom - employee image',
    'effects' => array(
      11 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 400,
          'height' => 350,
          'anchor' => 'center-center',
          'disable_scale' => 0,
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 0,
          ),
        ),
        'weight' => -10,
      ),
      12 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 350,
        ),
        'weight' => -9,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function os2_paragraphs_employee_node_info() {
  $items = array(
    'employee' => array(
      'name' => t('Ansat'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function os2_paragraphs_employee_paragraphs_info() {
  $items = array(
    'content_employee_carousel' => array(
      'name' => 'Employee - carousel',
      'bundle' => 'content_employee_carousel',
      'locked' => '1',
    ),
  );
  return $items;
}
