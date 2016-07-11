<?php
/**
 * @file
 * custom_jquery_update_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function custom_jquery_update_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
