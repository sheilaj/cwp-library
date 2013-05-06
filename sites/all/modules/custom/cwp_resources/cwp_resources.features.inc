<?php
/**
 * @file
 * cwp_resources.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cwp_resources_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cwp_resources_views_api() {
  return array("version" => "3.0");
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
  $items['database_node_index'] = entity_import('search_api_index', '{
    "name" : "Database node index",
    "machine_name" : "database_node_index",
    "description" : null,
    "server" : "database",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "200",
      "fields" : {
        "type" : { "type" : "string" },
        "title" : { "type" : "text", "boost" : "8.0" },
        "created" : { "type" : "date" },
        "changed" : { "type" : "date" },
        "field_author" : { "type" : "string" },
        "field_resource_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_publication_date" : { "type" : "date" },
        "field_category" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_summary" : { "type" : "text", "boost" : "2.0" },
        "field_publisher" : { "type" : "string" },
        "field_province_territory" : { "type" : "string" },
        "search_api_language" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "resource" : "resource" } }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_aggregation_1" : {
                "name" : "new author",
                "type" : "fulltext",
                "fields" : [ "field_author" ],
                "description" : "A Fulltext aggregation of the following fields: Resource author."
              }
            }
          }
        }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true, "field_author" : true, "field_summary" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true, "field_author" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true, "field_author" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true, "field_author" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function cwp_resources_default_search_api_server() {
  $items = array();
  $items['database'] = entity_import('search_api_server', '{
    "name" : "Database",
    "machine_name" : "database",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "3",
      "indexes" : { "database_node_index" : {
          "type" : {
            "table" : "search_api_db_database_node_index_type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_database_node_index_title",
            "type" : "text",
            "boost" : "8.0"
          },
          "created" : {
            "table" : "search_api_db_database_node_index_created",
            "type" : "date",
            "boost" : "1.0"
          },
          "changed" : {
            "table" : "search_api_db_database_node_index_changed",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_author" : {
            "table" : "search_api_db_database_node_index_field_author",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_publication_date" : {
            "table" : "search_api_db_database_node_index_field_publication_date",
            "type" : "date",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_database_node_index_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_resource_tags" : {
            "table" : "search_api_db_database_node_index_field_resource_tags",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_category" : {
            "table" : "search_api_db_database_node_index_field_category",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_summary" : {
            "table" : "search_api_db_database_node_index_field_summary",
            "type" : "text",
            "boost" : "2.0"
          },
          "field_province_territory" : {
            "table" : "search_api_db_database_node_index_field_province_territory",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_publisher" : {
            "table" : "search_api_db_database_node_index_field_publisher",
            "type" : "string",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
