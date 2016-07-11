<?php
/**
 * @file
 * os2_paragraphs_portfolio.features.inc
 */

/**
 * Implements hook_views_api().
 */
function os2_paragraphs_portfolio_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function os2_paragraphs_portfolio_image_default_styles() {
  $styles = array();

  // Exported image style: portfolio_mini.
  $styles['portfolio_mini'] = array(
    'label' => 'Portfolio - mini',
    'effects' => array(
      12 => array(
        'name' => 'epsacrop_crop_reuse',
        'data' => array(
          'jcrop_reuse' => 'portfolio_small',
        ),
        'weight' => 1,
      ),
      13 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 200,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: portfolio_small.
  $styles['portfolio_small'] = array(
    'label' => 'Portfolio - small',
    'effects' => array(
      4 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 450,
          'height' => 300,
          'anchor' => 'center-center',
          'disable_scale' => 0,
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'white',
            'bgopacity' => 0.6,
            'fallback' => 0,
          ),
        ),
        'weight' => 1,
      ),
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 450,
          'height' => 300,
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
function os2_paragraphs_portfolio_node_info() {
  $items = array(
    'portfolio' => array(
      'name' => t('Reference'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function os2_paragraphs_portfolio_paragraphs_info() {
  $items = array(
    'content_portfolio_stacked' => array(
      'name' => 'Portfolio - stacked',
      'bundle' => 'content_portfolio_stacked',
      'locked' => '1',
    ),
  );
  return $items;
}
