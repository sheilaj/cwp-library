<?php
/**
 * @file
 * cwp_resources.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cwp_resources_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cwp_resources_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function cwp_resources_image_default_styles() {
  $styles = array();

  // Exported image style: 150x180.
  $styles['150x180'] = array(
    'name' => '150x180',
    'label' => '150x180',
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
          'width' => 150,
          'height' => 180,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: banner.
  $styles['banner'] = array(
    'name' => 'banner',
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
          'width' => 799,
          'height' => 209,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'banner',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function cwp_resources_node_info() {
  $items = array(
    'resource' => array(
      'name' => t('Resource'),
      'base' => 'node_content',
      'description' => t('File, video or link to external resource.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function cwp_resources_default_search_api_index() {
  $items = array();
  $items['cwp_resources'] = entity_import('search_api_index', '{
    "name" : "CWP resources",
    "machine_name" : "cwp_resources",
    "description" : "Indexes node of type \\u0027resource\\u0027.",
    "server" : "cwp_database",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "200",
      "fields" : {
        "nid" : { "type" : "integer" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "created" : { "type" : "date" },
        "changed" : { "type" : "date" },
        "field_author" : { "type" : "text", "boost" : "3.0" },
        "field_resource_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_category" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_publisher" : { "type" : "string" },
        "field_weight" : { "type" : "integer" },
        "field_key_resource" : { "type" : "boolean" },
        "field_pub_date" : { "type" : "date" },
        "field_province" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "search_api_language" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "resource" : "resource" } }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [  ] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [  ] },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [  ] }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [  ] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [  ] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [  ] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true, "field_author" : true, "field_summary" : true } }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : { "field_summary" : true },
            "title" : 0,
            "alt" : 0,
            "tags" : "h1 = 5\\u000D\\u000Ah2 = 3\\u000D\\u000Ah3 = 2\\u000D\\u000Astrong = 2\\u000D\\u000Ab = 2\\u000D\\u000Aem = 1.5\\u000D\\u000Au = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true, "field_author" : true, "field_summary" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true, "field_author" : true, "field_summary" : true },
            "file" : "",
            "stopwords" : "but\\u000D\\u000Adid\\u000D\\u000Athe this that those\\u000D\\u000Aetc"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : [  ]
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function cwp_resources_default_search_api_server() {
  $items = array();
  $items['cwp_database'] = entity_import('search_api_server', '{
    "name" : "CWP database",
    "machine_name" : "cwp_database",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "3",
      "indexes" : { "cwp_resources" : {
          "nid" : {
            "table" : "search_api_db_cwp_resources_nid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_cwp_resources_title",
            "type" : "text",
            "boost" : "5.0"
          },
          "created" : {
            "table" : "search_api_db_cwp_resources_created",
            "type" : "date",
            "boost" : "1.0"
          },
          "changed" : {
            "table" : "search_api_db_cwp_resources_changed",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_author" : {
            "table" : "search_api_db_cwp_resources_field_author",
            "type" : "text",
            "boost" : "3.0"
          },
          "field_resource_tags" : {
            "table" : "search_api_db_cwp_resources_field_resource_tags",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_category" : {
            "table" : "search_api_db_cwp_resources_field_category",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_publisher" : {
            "table" : "search_api_db_cwp_resources_field_publisher",
            "type" : "string",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_cwp_resources_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_pub_date" : {
            "table" : "search_api_db_cwp_resources_field_pub_date",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_weight" : {
            "table" : "search_api_db_cwp_resources_field_weight",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_key_resource" : {
            "table" : "search_api_db_cwp_resources_field_key_resource",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "field_province" : {
            "table" : "search_api_db_cwp_resources_field_province",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : [  ]
  }');
  return $items;
}
