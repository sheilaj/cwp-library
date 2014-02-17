<?php
/**
 * @file
 * cwp_site_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cwp_site_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'content editor' => 'content editor',
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access backup and migrate'.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access backup files'.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access broken links report'.
  $permissions['access broken links report'] = array(
    'name' => 'access broken links report',
    'roles' => array(
      'content editor' => 'content editor',
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'content editor' => 'content editor',
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access own broken links report'.
  $permissions['access own broken links report'] = array(
    'name' => 'access own broken links report',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer backup and migrate'.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer linkchecker'.
  $permissions['administer linkchecker'] = array(
    'name' => 'administer linkchecker',
    'roles' => array(
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'content editor' => 'content editor',
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create featured_content content'.
  $permissions['create featured_content content'] = array(
    'name' => 'create featured_content content',
    'roles' => array(
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'content editor' => 'content editor',
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any featured_content content'.
  $permissions['delete any featured_content content'] = array(
    'name' => 'delete any featured_content content',
    'roles' => array(
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete backup files'.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'delete own featured_content content'.
  $permissions['delete own featured_content content'] = array(
    'name' => 'delete own featured_content content',
    'roles' => array(
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any featured_content content'.
  $permissions['edit any featured_content content'] = array(
    'name' => 'edit any featured_content content',
    'roles' => array(
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit link settings'.
  $permissions['edit link settings'] = array(
    'name' => 'edit link settings',
    'roles' => array(
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'edit own featured_content content'.
  $permissions['edit own featured_content content'] = array(
    'name' => 'edit own featured_content content',
    'roles' => array(
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'perform backup'.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'restore from backup'.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'user',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'content editor' => 'content editor',
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'content editor' => 'content editor',
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'content editor' => 'content editor',
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'system',
  );

  return $permissions;
}
