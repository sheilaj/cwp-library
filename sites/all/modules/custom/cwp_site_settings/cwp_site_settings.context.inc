<?php
/**
 * @file
 * cwp_site_settings.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function cwp_site_settings_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = 'Sitewide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'addthis-addthis_block' => array(
          'module' => 'addthis',
          'delta' => 'addthis_block',
          'region' => 'navbarright',
          'weight' => '-19',
        ),
        'text_resize-0' => array(
          'module' => 'text_resize',
          'delta' => '0',
          'region' => 'navbarright',
          'weight' => '-18',
        ),
        'views-featured_content-footer' => array(
          'module' => 'views',
          'delta' => 'featured_content-footer',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide');
  $export['sitewide'] = $context;

  return $export;
}
