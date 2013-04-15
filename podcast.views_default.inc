<?php
/**
 * @file
 * podcast.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function podcast_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'top_episodes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Top Episodes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Top Episodes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Vote */
  $handler->display->display_options['fields']['field__episode__voting']['id'] = 'field__episode__voting';
  $handler->display->display_options['fields']['field__episode__voting']['table'] = 'field_data_field__episode__voting';
  $handler->display->display_options['fields']['field__episode__voting']['field'] = 'field__episode__voting';
  $handler->display->display_options['fields']['field__episode__voting']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field__episode__voting']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/all/modules/fivestar/widgets/oxygen/oxygen.css',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'average',
  );
  /* Sort criterion: Content: Vote (field__episode__voting:rating) */
  $handler->display->display_options['sorts']['field__episode__voting_rating']['id'] = 'field__episode__voting_rating';
  $handler->display->display_options['sorts']['field__episode__voting_rating']['table'] = 'field_data_field__episode__voting';
  $handler->display->display_options['sorts']['field__episode__voting_rating']['field'] = 'field__episode__voting_rating';
  $handler->display->display_options['sorts']['field__episode__voting_rating']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'episode' => 'episode',
  );
  /* Filter criterion: Content: Vote (field__episode__voting:rating) */
  $handler->display->display_options['filters']['field__episode__voting_rating']['id'] = 'field__episode__voting_rating';
  $handler->display->display_options['filters']['field__episode__voting_rating']['table'] = 'field_data_field__episode__voting';
  $handler->display->display_options['filters']['field__episode__voting_rating']['field'] = 'field__episode__voting_rating';
  $handler->display->display_options['filters']['field__episode__voting_rating']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'top-episodes';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Top Episodes';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field__episode__voting' => 'field__episode__voting',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field__episode__voting' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Vote */
  $handler->display->display_options['fields']['field__episode__voting']['id'] = 'field__episode__voting';
  $handler->display->display_options['fields']['field__episode__voting']['table'] = 'field_data_field__episode__voting';
  $handler->display->display_options['fields']['field__episode__voting']['field'] = 'field__episode__voting';
  $handler->display->display_options['fields']['field__episode__voting']['label'] = '';
  $handler->display->display_options['fields']['field__episode__voting']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field__episode__voting']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field__episode__voting']['type'] = 'fivestar_formatter_rating';
  $handler->display->display_options['fields']['field__episode__voting']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'average',
  );
  $export['top_episodes'] = $view;

  return $export;
}
