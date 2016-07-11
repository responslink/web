<?php
/**
 * @file
 * os2_paragraphs_employee.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2_paragraphs_employee_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'paragraphs_employee';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Paragraphs employee';
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
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'owlcarousel';
  $handler->display->display_options['style_options']['instance'] = 'owlcarousel_settings_paragraphs-employee';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Felt: Indhold: Rendered Indholdselement */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
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
    'employee' => 'employee',
  );
  /* Filterkriterie: Indhold: Characteristic (field_characteristic) */
  $handler->display->display_options['filters']['field_characteristic_tid']['id'] = 'field_characteristic_tid';
  $handler->display->display_options['filters']['field_characteristic_tid']['table'] = 'field_data_field_characteristic';
  $handler->display->display_options['filters']['field_characteristic_tid']['field'] = 'field_characteristic_tid';
  $handler->display->display_options['filters']['field_characteristic_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_characteristic_tid']['expose']['operator_id'] = 'field_characteristic_tid_op';
  $handler->display->display_options['filters']['field_characteristic_tid']['expose']['label'] = 'Characteristics';
  $handler->display->display_options['filters']['field_characteristic_tid']['expose']['operator'] = 'field_characteristic_tid_op';
  $handler->display->display_options['filters']['field_characteristic_tid']['expose']['identifier'] = 'field_characteristic_tid';
  $handler->display->display_options['filters']['field_characteristic_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_characteristic_tid']['group_info']['label'] = 'Characteristic (field_characteristic)';
  $handler->display->display_options['filters']['field_characteristic_tid']['group_info']['identifier'] = 'field_characteristic_tid';
  $handler->display->display_options['filters']['field_characteristic_tid']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_characteristic_tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => '',
      'operator' => 'or',
      'value' => array(),
    ),
    2 => array(
      'title' => '',
      'operator' => 'or',
      'value' => array(),
    ),
    3 => array(
      'title' => '',
      'operator' => 'or',
      'value' => array(),
    ),
  );
  $handler->display->display_options['filters']['field_characteristic_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_characteristic_tid']['vocabulary'] = 'characteristics';
  /* Filterkriterie: Indhold: Language (field_language) */
  $handler->display->display_options['filters']['field_language_tid']['id'] = 'field_language_tid';
  $handler->display->display_options['filters']['field_language_tid']['table'] = 'field_data_field_language';
  $handler->display->display_options['filters']['field_language_tid']['field'] = 'field_language_tid';
  $handler->display->display_options['filters']['field_language_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_language_tid']['expose']['operator_id'] = 'field_language_tid_op';
  $handler->display->display_options['filters']['field_language_tid']['expose']['label'] = 'Sprog';
  $handler->display->display_options['filters']['field_language_tid']['expose']['operator'] = 'field_language_tid_op';
  $handler->display->display_options['filters']['field_language_tid']['expose']['identifier'] = 'field_language_tid';
  $handler->display->display_options['filters']['field_language_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_language_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_language_tid']['vocabulary'] = 'languages';

  /* Display: Carousel */
  $handler = $view->new_display('block', 'Carousel', 'block_carousel');
  $translatables['paragraphs_employee'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Characteristics'),
    t('Characteristic (field_characteristic)'),
    t('Sprog'),
    t('Carousel'),
  );
  $export['paragraphs_employee'] = $view;

  return $export;
}
