<?php
/**
 * @file
 * actualites.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function actualites_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function actualites_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function actualites_node_info() {
  $items = array(
    'actualite' => array(
      'name' => t('Actualité'),
      'base' => 'node_content',
      'description' => t('Use <em>actualite</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
