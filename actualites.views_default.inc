<?php
/**
 * @file
 * actualites.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function actualites_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'actualites';
  $view->description = 'Affiche les actualités sous forme de page et de panneau de contenu.';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Actualités';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Nouvelles';
  $handler->display->display_options['css_class'] = 'pp-slave-front-actualite';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Read all news ...';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_actualite_date']['id'] = 'field_actualite_date';
  $handler->display->display_options['fields']['field_actualite_date']['table'] = 'field_data_field_actualite_date';
  $handler->display->display_options['fields']['field_actualite_date']['field'] = 'field_actualite_date';
  $handler->display->display_options['fields']['field_actualite_date']['label'] = 'Date de publication';
  $handler->display->display_options['fields']['field_actualite_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Vignette */
  $handler->display->display_options['fields']['field_actualite_image']['id'] = 'field_actualite_image';
  $handler->display->display_options['fields']['field_actualite_image']['table'] = 'field_data_field_actualite_image';
  $handler->display->display_options['fields']['field_actualite_image']['field'] = 'field_actualite_image';
  $handler->display->display_options['fields']['field_actualite_image']['label'] = '';
  $handler->display->display_options['fields']['field_actualite_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_actualite_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_actualite_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Champ: Contenu : Description */
  $handler->display->display_options['fields']['field_actualite_description']['id'] = 'field_actualite_description';
  $handler->display->display_options['fields']['field_actualite_description']['table'] = 'field_data_field_actualite_description';
  $handler->display->display_options['fields']['field_actualite_description']['field'] = 'field_actualite_description';
  $handler->display->display_options['fields']['field_actualite_description']['label'] = '';
  $handler->display->display_options['fields']['field_actualite_description']['element_label_colon'] = FALSE;
  /* Critère de tri: Contenu : Date (field_actualite_date) */
  $handler->display->display_options['sorts']['field_actualite_date_value']['id'] = 'field_actualite_date_value';
  $handler->display->display_options['sorts']['field_actualite_date_value']['table'] = 'field_data_field_actualite_date';
  $handler->display->display_options['sorts']['field_actualite_date_value']['field'] = 'field_actualite_date_value';
  $handler->display->display_options['sorts']['field_actualite_date_value']['order'] = 'DESC';
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'actualite' => 'actualite',
  );
  /* Critère de filtrage: Contenu : Langue */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );

  /* Display: Page: Archive */
  $handler = $view->new_display('page', 'Page: Archive', 'actualites_page_archive');
  $handler->display->display_options['display_description'] = 'La page d\'archive listant toutes les actualités publiées.';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'archive';
  $handler->display->display_options['path'] = 'actualites';

  /* Display: Nouvelles: Plus récentes */
  $handler = $view->new_display('panel_pane', 'Nouvelles: Plus récentes', 'actualites_pane_recent');
  $handler->display->display_options['display_description'] = 'Affiche les actualités les plus récentes dans un panneau de contenu.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_actualite_date_1']['id'] = 'field_actualite_date_1';
  $handler->display->display_options['fields']['field_actualite_date_1']['table'] = 'field_data_field_actualite_date';
  $handler->display->display_options['fields']['field_actualite_date_1']['field'] = 'field_actualite_date';
  $handler->display->display_options['fields']['field_actualite_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_actualite_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_actualite_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Champ: Contenu : Vignette */
  $handler->display->display_options['fields']['field_actualite_image']['id'] = 'field_actualite_image';
  $handler->display->display_options['fields']['field_actualite_image']['table'] = 'field_data_field_actualite_image';
  $handler->display->display_options['fields']['field_actualite_image']['field'] = 'field_actualite_image';
  $handler->display->display_options['fields']['field_actualite_image']['label'] = '';
  $handler->display->display_options['fields']['field_actualite_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_actualite_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_actualite_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu : Description */
  $handler->display->display_options['fields']['field_actualite_description']['id'] = 'field_actualite_description';
  $handler->display->display_options['fields']['field_actualite_description']['table'] = 'field_data_field_actualite_description';
  $handler->display->display_options['fields']['field_actualite_description']['field'] = 'field_actualite_description';
  $handler->display->display_options['fields']['field_actualite_description']['label'] = '';
  $handler->display->display_options['fields']['field_actualite_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_actualite_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_actualite_description']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['pane_category']['name'] = 'Portail Polytechnique';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['actualites'] = array(
    t('Master'),
    t('Nouvelles'),
    t('Read all news ...'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Date de publication'),
    t('Page: Archive'),
    t('La page d\'archive listant toutes les actualités publiées.'),
    t('archive'),
    t('Nouvelles: Plus récentes'),
    t('Affiche les actualités les plus récentes dans un panneau de contenu.'),
    t('plus'),
    t('Portail Polytechnique'),
  );
  $export['actualites'] = $view;

  return $export;
}
