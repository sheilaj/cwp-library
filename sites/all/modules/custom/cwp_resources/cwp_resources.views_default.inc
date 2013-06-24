<?php
/**
 * @file
 * cwp_resources.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cwp_resources_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cwp_category_image';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'CWP: Category image';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Entity: Rendered entity */
  $handler->display->display_options['empty']['entity']['id'] = 'entity';
  $handler->display->display_options['empty']['entity']['table'] = 'entity__global';
  $handler->display->display_options['empty']['entity']['field'] = 'entity';
  $handler->display->display_options['empty']['entity']['label'] = 'Default image';
  $handler->display->display_options['empty']['entity']['empty'] = TRUE;
  $handler->display->display_options['empty']['entity']['entity_id'] = '2';
  $handler->display->display_options['empty']['entity']['view_mode'] = 'token';
  /* Field: Taxonomy term: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'banner',
    'image_link' => '',
  );
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'category' => 'category',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'header');
  $translatables['cwp_category_image'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Default image'),
    t('All'),
    t('Block'),
  );
  $export['cwp_category_image'] = $view;

  $view = new view();
  $view->name = 'cwp_related_resources';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CWP: Related resources';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related resources';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Key resource (field_key_resource) */
  $handler->display->display_options['sorts']['field_key_resource_value']['id'] = 'field_key_resource_value';
  $handler->display->display_options['sorts']['field_key_resource_value']['table'] = 'field_data_field_key_resource';
  $handler->display->display_options['sorts']['field_key_resource_value']['field'] = 'field_key_resource_value';
  $handler->display->display_options['sorts']['field_key_resource_value']['order'] = 'DESC';
  /* Sort criterion: Content: Publication date (field_pub_date) */
  $handler->display->display_options['sorts']['field_pub_date_value']['id'] = 'field_pub_date_value';
  $handler->display->display_options['sorts']['field_pub_date_value']['table'] = 'field_data_field_pub_date';
  $handler->display->display_options['sorts']['field_pub_date_value']['field'] = 'field_pub_date_value';
  $handler->display->display_options['sorts']['field_pub_date_value']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'tags' => 'tags',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
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
    'resource' => 'resource',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['cwp_related_resources'] = array(
    t('Master'),
    t('Related resources'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Block'),
  );
  $export['cwp_related_resources'] = $view;

  $view = new view();
  $view->name = 'cwp_resources';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_cwp_resources';
  $view->human_name = 'CWP: Resource library';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Resources';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_cwp_resources';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Publication date */
  $handler->display->display_options['fields']['field_pub_date']['id'] = 'field_pub_date';
  $handler->display->display_options['fields']['field_pub_date']['table'] = 'search_api_index_cwp_resources';
  $handler->display->display_options['fields']['field_pub_date']['field'] = 'field_pub_date';
  $handler->display->display_options['fields']['field_pub_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pub_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'search_api_index_cwp_resources';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['hide_empty'] = TRUE;
  /* Field: Indexed Node: Publisher */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'search_api_index_cwp_resources';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['hide_empty'] = TRUE;
  /* Field: Indexed Node: Download */
  $handler->display->display_options['fields']['field_file']['id'] = 'field_file';
  $handler->display->display_options['fields']['field_file']['table'] = 'search_api_index_cwp_resources';
  $handler->display->display_options['fields']['field_file']['field'] = 'field_file';
  $handler->display->display_options['fields']['field_file']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_file']['click_sort_column'] = 'fid';
  /* Field: Indexed Node: Source */
  $handler->display->display_options['fields']['field_resource_link']['id'] = 'field_resource_link';
  $handler->display->display_options['fields']['field_resource_link']['table'] = 'search_api_index_cwp_resources';
  $handler->display->display_options['fields']['field_resource_link']['field'] = 'field_resource_link';
  $handler->display->display_options['fields']['field_resource_link']['click_sort_column'] = 'url';
  /* Field: Indexed Node: Tags */
  $handler->display->display_options['fields']['field_resource_tags']['id'] = 'field_resource_tags';
  $handler->display->display_options['fields']['field_resource_tags']['table'] = 'search_api_index_cwp_resources';
  $handler->display->display_options['fields']['field_resource_tags']['field'] = 'field_resource_tags';
  $handler->display->display_options['fields']['field_resource_tags']['label'] = '';
  $handler->display->display_options['fields']['field_resource_tags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resource_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_tags']['list']['mode'] = 'list';
  $handler->display->display_options['fields']['field_resource_tags']['list']['separator'] = '';
  $handler->display->display_options['fields']['field_resource_tags']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_resource_tags']['view_mode'] = 'full';
  /* Field: Indexed Node: Province/Territory */
  $handler->display->display_options['fields']['field_province']['id'] = 'field_province';
  $handler->display->display_options['fields']['field_province']['table'] = 'search_api_index_cwp_resources';
  $handler->display->display_options['fields']['field_province']['field'] = 'field_province';
  $handler->display->display_options['fields']['field_province']['label'] = '';
  $handler->display->display_options['fields']['field_province']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_province']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_province']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_province']['list']['mode'] = 'list';
  $handler->display->display_options['fields']['field_province']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_province']['view_mode'] = 'full';
  /* Field: Indexed Node: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'search_api_index_cwp_resources';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_category']['alter']['text'] = '<div class="category">[field_category]</div><div class="province">[field_province]</div><div class="tags">[field_resource_tags]</div>';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['list']['mode'] = 'list';
  $handler->display->display_options['fields']['field_category']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_category']['view_mode'] = 'full';
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_cwp_resources';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = 'read more >>';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 1;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_cwp_resources';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  /* Sort criterion: Indexed Node: Key resource */
  $handler->display->display_options['sorts']['field_key_resource']['id'] = 'field_key_resource';
  $handler->display->display_options['sorts']['field_key_resource']['table'] = 'search_api_index_cwp_resources';
  $handler->display->display_options['sorts']['field_key_resource']['field'] = 'field_key_resource';
  $handler->display->display_options['sorts']['field_key_resource']['order'] = 'DESC';
  /* Sort criterion: Indexed Node: Publication date */
  $handler->display->display_options['sorts']['field_pub_date']['id'] = 'field_pub_date';
  $handler->display->display_options['sorts']['field_pub_date']['table'] = 'search_api_index_cwp_resources';
  $handler->display->display_options['sorts']['field_pub_date']['field'] = 'field_pub_date';
  $handler->display->display_options['sorts']['field_pub_date']['order'] = 'DESC';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_cwp_resources';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Keyword search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'keywords';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'resources';
  $translatables['cwp_resources'] = array(
    t('Master'),
    t('Resources'),
    t('more'),
    t('Go'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Publication date'),
    t('Author'),
    t('Publisher'),
    t('Download'),
    t('Source'),
    t('<div class="category">[field_category]</div><div class="province">[field_province]</div><div class="tags">[field_resource_tags]</div>'),
    t('read more >>'),
    t('Keyword search'),
    t('Page'),
  );
  $export['cwp_resources'] = $view;

  return $export;
}
