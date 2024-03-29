<?php
/**
 * @file
 * vas_guia_telefonica.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vas_guia_telefonica_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_guia_telefonica';
  $strongarm->value = 0;
  $export['comment_anonymous_guia_telefonica'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_guia_telefonica';
  $strongarm->value = 1;
  $export['comment_default_mode_guia_telefonica'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_guia_telefonica';
  $strongarm->value = '50';
  $export['comment_default_per_page_guia_telefonica'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_guia_telefonica';
  $strongarm->value = 1;
  $export['comment_form_location_guia_telefonica'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_guia_telefonica';
  $strongarm->value = '2';
  $export['comment_guia_telefonica'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_guia_telefonica';
  $strongarm->value = '1';
  $export['comment_preview_guia_telefonica'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_guia_telefonica';
  $strongarm->value = 1;
  $export['comment_subject_field_guia_telefonica'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__guia_telefonica';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '2',
        ),
        'path' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__guia_telefonica'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_guia_telefonica';
  $strongarm->value = '0';
  $export['language_content_type_guia_telefonica'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_guia_telefonica';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_guia_telefonica'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_guia_telefonica';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_guia_telefonica'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_guia_telefonica';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_guia_telefonica'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_guia_telefonica';
  $strongarm->value = '1';
  $export['node_preview_guia_telefonica'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_guia_telefonica';
  $strongarm->value = 1;
  $export['node_submitted_guia_telefonica'] = $strongarm;

  return $export;
}
