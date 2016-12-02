<?php
/**
 * @file
 * bps_pathauto.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bps_pathauto_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  return $permissions;
}
