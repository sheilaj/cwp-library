<?php
/**
 * @file
 * cwp_resources.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function cwp_resources_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resource_node';
  $context->description = '';
  $context->tag = 'Resources';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'resource' => 'resource',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-cwp_related_resources-block' => array(
          'module' => 'views',
          'delta' => 'cwp_related_resources-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Resources');
  $export['resource_node'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resources_page';
  $context->description = '';
  $context->tag = 'Resources';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'cwp_resources:page' => 'cwp_resources:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'cwp_resources-cwp_category_header' => array(
          'module' => 'cwp_resources',
          'delta' => 'cwp_category_header',
          'region' => 'header',
          'weight' => '-9',
        ),
        'views--exp-cwp_resources-page' => array(
          'module' => 'views',
          'delta' => '-exp-cwp_resources-page',
          'region' => 'sidebar_first',
          'weight' => '-18',
        ),
        'facetapi-NkhvugK02SY5m7osdBPia0wt9yOMqGYw' => array(
          'module' => 'facetapi',
          'delta' => 'NkhvugK02SY5m7osdBPia0wt9yOMqGYw',
          'region' => 'sidebar_first',
          'weight' => '-17',
        ),
        'facetapi-jV8Xz1FC47yqeWH92vRao5jrNriXCbhv' => array(
          'module' => 'facetapi',
          'delta' => 'jV8Xz1FC47yqeWH92vRao5jrNriXCbhv',
          'region' => 'sidebar_first',
          'weight' => '-16',
        ),
        'facetapi-Dy4NAvprRGnNORwc81bIKCMb02Ade9FT' => array(
          'module' => 'facetapi',
          'delta' => 'Dy4NAvprRGnNORwc81bIKCMb02Ade9FT',
          'region' => 'sidebar_first',
          'weight' => '-15',
        ),
        'facetapi-KA9irCgB7ZWD4DaagJkyuVhVBKpZ68eh' => array(
          'module' => 'facetapi',
          'delta' => 'KA9irCgB7ZWD4DaagJkyuVhVBKpZ68eh',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Resources');
  $export['resources_page'] = $context;

  return $export;
}
