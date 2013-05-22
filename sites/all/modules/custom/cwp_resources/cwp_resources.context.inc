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
        'views--exp-cwp_resources-page' => array(
          'module' => 'views',
          'delta' => '-exp-cwp_resources-page',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-NkhvugK02SY5m7osdBPia0wt9yOMqGYw' => array(
          'module' => 'facetapi',
          'delta' => 'NkhvugK02SY5m7osdBPia0wt9yOMqGYw',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-C3VWfMMd1Vz27iIwDozBLhW0pBd0uc1F' => array(
          'module' => 'facetapi',
          'delta' => 'C3VWfMMd1Vz27iIwDozBLhW0pBd0uc1F',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-Dy4NAvprRGnNORwc81bIKCMb02Ade9FT' => array(
          'module' => 'facetapi',
          'delta' => 'Dy4NAvprRGnNORwc81bIKCMb02Ade9FT',
          'region' => 'sidebar_first',
          'weight' => '-7',
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
