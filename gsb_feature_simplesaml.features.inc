<?php
/**
 * @file
 * gsb_feature_simplesaml.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_simplesaml_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
