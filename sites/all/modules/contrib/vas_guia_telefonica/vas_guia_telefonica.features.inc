<?php
/**
 * @file
 * vas_guia_telefonica.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vas_guia_telefonica_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function vas_guia_telefonica_node_info() {
  $items = array(
    'guia_telefonica' => array(
      'name' => t('Contacto'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
  );
  return $items;
}
