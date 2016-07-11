<?php
/**
 * @file
 * os2_paragraphs_portfolio.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2_paragraphs_portfolio_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'paragraphs_portfolio';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Paragraphs portfolio';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'row';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'os2-portfolio-stacked-image-wrapper';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Felt: Indhold: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'portfolio_mini',
    'image_link' => '',
  );
  /* Sorteringskriterie: Global: Tilfældig */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'portfolio' => 'portfolio',
  );
  /* Filterkriterie: Indhold: Category (field_reference_category) */
  $handler->display->display_options['filters']['field_reference_category_tid']['id'] = 'field_reference_category_tid';
  $handler->display->display_options['filters']['field_reference_category_tid']['table'] = 'field_data_field_reference_category';
  $handler->display->display_options['filters']['field_reference_category_tid']['field'] = 'field_reference_category_tid';
  $handler->display->display_options['filters']['field_reference_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_reference_category_tid']['expose']['operator_id'] = 'field_reference_category_tid_op';
  $handler->display->display_options['filters']['field_reference_category_tid']['expose']['label'] = 'Kategori';
  $handler->display->display_options['filters']['field_reference_category_tid']['expose']['operator'] = 'field_reference_category_tid_op';
  $handler->display->display_options['filters']['field_reference_category_tid']['expose']['identifier'] = 'field_reference_category_tid';
  $handler->display->display_options['filters']['field_reference_category_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_reference_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_reference_category_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_reference_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_reference_category_tid']['vocabulary'] = 'reference_categories';

  /* Display: Stacked */
  $handler = $view->new_display('block', 'Stacked', 'block_stacked');
  $translatables['paragraphs_portfolio'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Kategori'),
    t('Stacked'),
  );
  $export['paragraphs_portfolio'] = $view;

  return $export;
}
