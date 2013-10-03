<?php
/**
 * @file
 * cwp_site_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cwp_site_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cwp_site_settings_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function cwp_site_settings_image_default_styles() {
  $styles = array();

  // Exported image style: 240x90.
  $styles['240x90'] = array(
    'name' => '240x90',
    'label' => '240x90',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 240,
          'height' => 90,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function cwp_site_settings_node_info() {
  $items = array(
    'featured_content' => array(
      'name' => t('Featured content'),
      'base' => 'node_content',
      'description' => t('Title, image, teaser and link to a page or resource. Currently used for the three items at the bottom of most pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
