<?php
/**
 * @file
 * custom_stage_file_proxy_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function custom_stage_file_proxy_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stage_file_proxy_hotlink';
  $strongarm->value = 0;
  $export['stage_file_proxy_hotlink'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stage_file_proxy_origin';
  $strongarm->value = 'http://lydstudietaros.hjemmesidekongen.dk';
  $export['stage_file_proxy_origin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stage_file_proxy_origin_dir';
  $strongarm->value = 'sites/default/files';
  $export['stage_file_proxy_origin_dir'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stage_file_proxy_sslversion';
  $strongarm->value = '3';
  $export['stage_file_proxy_sslversion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stage_file_proxy_use_imagecache_root';
  $strongarm->value = 1;
  $export['stage_file_proxy_use_imagecache_root'] = $strongarm;

  return $export;
}
