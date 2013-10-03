<?php
/**
 * @file
 * cwp_site_settings.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function cwp_site_settings_user_default_roles() {
  $roles = array();

  // Exported role: content editor.
  $roles['content editor'] = array(
    'name' => 'content editor',
    'weight' => 4,
  );

  // Exported role: developer.
  $roles['developer'] = array(
    'name' => 'developer',
    'weight' => 2,
  );

  // Exported role: site admin.
  $roles['site admin'] = array(
    'name' => 'site admin',
    'weight' => 3,
  );

  return $roles;
}
