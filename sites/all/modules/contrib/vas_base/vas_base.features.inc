<?php
/**
 * @file
 * vas_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vas_base_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function vas_base_node_info() {
  $items = array(
    'contenido_general' => array(
      'name' => t('Contenido general'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
