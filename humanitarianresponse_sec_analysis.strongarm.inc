<?php
/**
 * @file
 * humanitarianresponse_sec_analysis.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function humanitarianresponse_sec_analysis_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autosave_sectoral_analysis';
  $strongarm->value = 1;
  $export['autosave_sectoral_analysis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_sectoral_analysis';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_sectoral_analysis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_sectoral_analysis';
  $strongarm->value = '';
  $export['auto_entitylabel_pattern_node_sectoral_analysis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_sectoral_analysis';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_sectoral_analysis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_sectoral_analysis';
  $strongarm->value = 0;
  $export['comment_anonymous_sectoral_analysis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_sectoral_analysis';
  $strongarm->value = 1;
  $export['comment_default_mode_sectoral_analysis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_sectoral_analysis';
  $strongarm->value = '50';
  $export['comment_default_per_page_sectoral_analysis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_sectoral_analysis';
  $strongarm->value = 1;
  $export['comment_form_location_sectoral_analysis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_sectoral_analysis';
  $strongarm->value = '1';
  $export['comment_preview_sectoral_analysis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_sectoral_analysis';
  $strongarm->value = '1';
  $export['comment_sectoral_analysis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_sectoral_analysis';
  $strongarm->value = 1;
  $export['comment_subject_field_sectoral_analysis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__sectoral_analysis';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '13',
        ),
        'workflow' => array(
          'weight' => '10',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__sectoral_analysis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_sectoral_analysis';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_sectoral_analysis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_sectoral_analysis';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_sectoral_analysis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_sectoral_analysis';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_sectoral_analysis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_sectoral_analysis';
  $strongarm->value = '0';
  $export['node_preview_sectoral_analysis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_sectoral_analysis';
  $strongarm->value = 1;
  $export['node_submitted_sectoral_analysis'] = $strongarm;

  return $export;
}
