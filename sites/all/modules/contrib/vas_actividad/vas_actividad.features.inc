<?php
/**
 * @file
 * vas_actividad.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vas_actividad_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function vas_actividad_node_info() {
  $items = array(
    'actividades' => array(
      'name' => t('Actividad'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
