<?php
/**
 * @file
 * cwp_resources.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cwp_resources_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete terms in category'.
  $permissions['delete terms in category'] = array(
    'name' => 'delete terms in category',
    'roles' => array(
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in province'.
  $permissions['delete terms in province'] = array(
    'name' => 'delete terms in province',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in category'.
  $permissions['edit terms in category'] = array(
    'name' => 'edit terms in category',
    'roles' => array(
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in province'.
  $permissions['edit terms in province'] = array(
    'name' => 'edit terms in province',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'content editor' => 'content editor',
      'developer' => 'developer',
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
