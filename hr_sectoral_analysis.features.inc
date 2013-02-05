<?php
/**
 * @file
 * hr_sectoral_analysis.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hr_sectoral_analysis_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hr_sectoral_analysis_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hr_sectoral_analysis_node_info() {
  $items = array(
    'sectoral_analysis' => array(
      'name' => t('Sectoral Analysis'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
;
}
