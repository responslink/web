<?php
/**
 * implementation of hook_panels_layouts()
 */
$plugin = array(
  'title' => t('1 column'),
  'category' => t('OS2'),
  'icon' => '1-column.png',
  'theme' => '1-column',
  'css' => '1-column.css',
  'regions' => array(
    'content' => t('Content'),
  ),
);
