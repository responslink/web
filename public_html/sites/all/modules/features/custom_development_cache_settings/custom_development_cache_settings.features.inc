<?php
/**
 * @file
 * custom_development_cache_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function custom_development_cache_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
