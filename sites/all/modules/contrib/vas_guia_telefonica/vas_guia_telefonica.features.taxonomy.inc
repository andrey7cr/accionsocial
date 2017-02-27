<?php
/**
 * @file
 * vas_guia_telefonica.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function vas_guia_telefonica_taxonomy_default_vocabularies() {
  return array(
    'unidad_de_la_vas' => array(
      'name' => 'Unidad de la VAS',
      'machine_name' => 'unidad_de_la_vas',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
