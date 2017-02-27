<?php
/**
 * @file
 * vas_enlaces.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vas_enlaces_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function vas_enlaces_node_info() {
  $items = array(
    'enlace' => array(
      'name' => t('Enlace'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
