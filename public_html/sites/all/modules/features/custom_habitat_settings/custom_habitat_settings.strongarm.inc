<?php
/**
 * @file
 * custom_habitat_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function custom_habitat_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'habitat_disable_dev';
  $strongarm->value = array(
    0 => 'varnish',
    1 => 'entitycache',
    2 => 'redis',
    3 => 'custom_cache_settings',
    4 => 'advagg',
    5 => 'advagg_font',
    6 => 'advagg_bundler',
    7 => 'advagg_css_cdn',
    8 => 'advagg_js_cdn',
    9 => 'advagg_css_compress',
    10 => 'advagg_js_compress',
    11 => 'advagg_ext_compress',
    12 => 'advagg_validator',
    13 => 'advagg_mod',
    14 => 'advagg_sri',
    15 => 'custom_advanced_aggregation_settings',
  );
  $export['habitat_disable_dev'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'habitat_disable_local';
  $strongarm->value = array(
    0 => 'varnish',
    1 => 'entitycache',
    2 => 'redis',
    3 => 'custom_cache_settings',
    4 => 'advagg',
    5 => 'advagg_font',
    6 => 'advagg_bundler',
    7 => 'advagg_css_cdn',
    8 => 'advagg_js_cdn',
    9 => 'advagg_css_compress',
    10 => 'advagg_js_compress',
    11 => 'advagg_ext_compress',
    12 => 'advagg_validator',
    13 => 'advagg_mod',
    14 => 'advagg_sri',
    15 => 'custom_advanced_aggregation_settings',
  );
  $export['habitat_disable_local'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'habitat_disable_prod';
  $strongarm->value = array(
    0 => 'devel',
    1 => 'field_ui',
    2 => 'views_ui',
    3 => 'habitat_ui',
    4 => 'update',
    5 => 'devel_generate',
    6 => 'diff',
    7 => 'stage_file_proxy',
    8 => 'custom_stage_file_proxy_settings',
    9 => 'custom_development_cache_settings',
  );
  $export['habitat_disable_prod'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'habitat_disable_test';
  $strongarm->value = array(
    0 => 'varnish',
    1 => 'entitycache',
    2 => 'redis',
    3 => 'custom_cache_settings',
    4 => 'advagg',
    5 => 'advagg_font',
    6 => 'advagg_bundler',
    7 => 'advagg_css_cdn',
    8 => 'advagg_js_cdn',
    9 => 'advagg_css_compress',
    10 => 'advagg_js_compress',
    11 => 'advagg_ext_compress',
    12 => 'advagg_validator',
    13 => 'advagg_mod',
    14 => 'advagg_sri',
    15 => 'custom_advanced_aggregation_settings',
  );
  $export['habitat_disable_test'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'habitat_enable_dev';
  $strongarm->value = array(
    0 => 'devel',
    1 => 'field_ui',
    2 => 'views_ui',
    3 => 'habitat_ui',
    4 => 'page_manager',
    5 => 'update',
    6 => 'devel_generate',
    7 => 'stage_file_proxy',
    8 => 'custom_stage_file_proxy_settings',
    9 => 'features',
    10 => 'diff',
    11 => 'custom_development_cache_settings',
  );
  $export['habitat_enable_dev'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'habitat_enable_local';
  $strongarm->value = array(
    0 => 'devel',
    1 => 'field_ui',
    2 => 'views_ui',
    3 => 'habitat_ui',
    4 => 'page_manager',
    5 => 'update',
    6 => 'devel_generate',
    7 => 'stage_file_proxy',
    8 => 'custom_stage_file_proxy_settings',
    9 => 'features',
    10 => 'diff',
    11 => 'custom_development_cache_settings',
  );
  $export['habitat_enable_local'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'habitat_enable_prod';
  $strongarm->value = array(
    0 => 'advagg',
    1 => 'custom_advanced_aggregation_settings',
    2 => 'varnish',
    3 => 'entitycache',
    4 => 'redis',
    5 => 'custom_cache_settings',
  );
  $export['habitat_enable_prod'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'habitat_enable_test';
  $strongarm->value = array(
    0 => 'devel',
    1 => 'field_ui',
    2 => 'views_ui',
    3 => 'habitat_ui',
    4 => 'page_manager',
    5 => 'update',
    6 => 'devel_generate',
    7 => 'stage_file_proxy',
    8 => 'custom_stage_file_proxy_settings',
    9 => 'features',
    10 => 'diff',
    11 => 'custom_development_cache_settings',
  );
  $export['habitat_enable_test'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'habitat_habitats';
  $strongarm->value = array(
    0 => 'local',
    1 => 'dev',
    2 => 'test',
    3 => 'prod',
  );
  $export['habitat_habitats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'habitat_variable';
  $strongarm->value = 'environment';
  $export['habitat_variable'] = $strongarm;

  return $export;
}
