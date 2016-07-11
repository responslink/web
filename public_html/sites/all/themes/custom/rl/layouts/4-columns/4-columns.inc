<?php
/**
 * implementation of hook_panels_layouts()
 */
$plugin = array(
  'title' => t('4 columns'),
  'category' => t('OS2'),
  'icon' => '4-columns.png',
  'theme' => '4-columns',
  'css' => '4-columns.css',
  'regions' => array(
    'column-left' => t('Left column'),
    'column-center-first' => t('Center column'),
    'column-center-second' => t('Center column'),
    'column-right' => t('Right column'),
  ),
);
