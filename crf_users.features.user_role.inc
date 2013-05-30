<?php
/**
 * @file
 * crf_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function crf_users_user_default_roles() {
  $roles = array();

  // Exported role: CRF_manager.
  $roles['CRF_manager'] = array(
    'name' => 'CRF_manager',
    'weight' => 101,
    'machine_name' => 'crf_manager',
  );

  // Exported role: CRF_user.
  $roles['CRF_user'] = array(
    'name' => 'CRF_user',
    'weight' => 100,
    'machine_name' => 'crf_user',
  );

  return $roles;
}
