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

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  return $roles;
}
