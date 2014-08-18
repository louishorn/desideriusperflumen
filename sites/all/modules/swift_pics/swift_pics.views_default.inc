<?php
/**
 * @file
 * Default Views file for Swift Pics module.
 */

/**
 * Implements hook_views_default_views().
 */
function swift_pics_views_default_views() {
  // Check to make sure the thumbnail image style exists.
  $thumbnail_style = image_style_load('thumbnail', NULL, NULL);

  if (empty($thumbnail_style)) {
    // Thumbnail style doesn't exist. Create it.
    $thumbnail_style = image_style_save(array('name' => 'thumbnail'));
    $effect = array(
      'name' => 'image_scale',
      'data' => array(
        'width' => 100,
        'height' => 100,
        'upscale' => TRUE,
      ),
      'isid' => $thumbnail_style['isid'],
    );
    // Save the thumbnail style scale effect.
    image_effect_save($effect);
  }

  $view = new view();
  $view->name = 'swift_pics';
  $view->description = 'Contains useful Swift Pics node type views.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Swift Pics';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '[title]';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Swift Pics Images */
  $handler->display->display_options['fields']['swift_pics_images']['id'] = 'swift_pics_images';
  $handler->display->display_options['fields']['swift_pics_images']['table'] = 'field_data_swift_pics_images';
  $handler->display->display_options['fields']['swift_pics_images']['field'] = 'swift_pics_images';
  $handler->display->display_options['fields']['swift_pics_images']['label'] = '';
  $handler->display->display_options['fields']['swift_pics_images']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['external'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['html'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['swift_pics_images']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['swift_pics_images']['hide_empty'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['empty_zero'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['swift_pics_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['swift_pics_images']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['swift_pics_images']['group_rows'] = 1;
  $handler->display->display_options['fields']['swift_pics_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['swift_pics_images']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'numeric';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
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
    'swift_pics' => 'swift_pics',
  );

  /* Display: Gallery Images */
  $handler = $view->new_display('page', 'Gallery Images', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Swift Pics Images */
  $handler->display->display_options['fields']['swift_pics_images']['id'] = 'swift_pics_images';
  $handler->display->display_options['fields']['swift_pics_images']['table'] = 'field_data_swift_pics_images';
  $handler->display->display_options['fields']['swift_pics_images']['field'] = 'swift_pics_images';
  $handler->display->display_options['fields']['swift_pics_images']['label'] = '';
  $handler->display->display_options['fields']['swift_pics_images']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['external'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['html'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['swift_pics_images']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['swift_pics_images']['hide_empty'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['empty_zero'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['swift_pics_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['swift_pics_images']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['swift_pics_images']['group_rows'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['swift_pics_images']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['field_api_classes'] = 0;
  $handler->display->display_options['path'] = 'swift-pics';

  /* Display: Gallery Fields */
  $handler = $view->new_display('attachment', 'Gallery Fields', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Attaches the galleries fields to the gallery images.';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: Galleries Listing */
  $handler = $view->new_display('page', 'Galleries Listing', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All Galleries';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'swift_pics_images' => 'swift_pics_images',
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Swift Pics Images */
  $handler->display->display_options['fields']['swift_pics_images']['id'] = 'swift_pics_images';
  $handler->display->display_options['fields']['swift_pics_images']['table'] = 'field_data_swift_pics_images';
  $handler->display->display_options['fields']['swift_pics_images']['field'] = 'swift_pics_images';
  $handler->display->display_options['fields']['swift_pics_images']['label'] = '';
  $handler->display->display_options['fields']['swift_pics_images']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['path'] = 'swift-pics/[nid]';
  $handler->display->display_options['fields']['swift_pics_images']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['external'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['swift_pics_images']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['alter']['html'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['swift_pics_images']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['swift_pics_images']['hide_empty'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['empty_zero'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['swift_pics_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['swift_pics_images']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['swift_pics_images']['group_rows'] = 1;
  $handler->display->display_options['fields']['swift_pics_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['swift_pics_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['swift_pics_images']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['swift_pics_images']['separator'] = '';
  $handler->display->display_options['fields']['swift_pics_images']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'swift-pics/[nid]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'swift-pics-list';

  // Add view to list of views to provide.
  $views[$view->name] = $view;

  // Return array of default views.
  return $views;
}
