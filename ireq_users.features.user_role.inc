<?php
/**
 * @file
 * ireq_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ireq_users_user_default_roles() {
  $roles = array();

  // Exported role: IREQ_manager.
  $roles['IREQ_manager'] = array(
    'name' => 'IREQ_manager',
    'weight' => 101,
    'machine_name' => 'ireq_manager',
  );

  // Exported role: IREQ_user.
  $roles['IREQ_user'] = array(
    'name' => 'IREQ_user',
    'weight' => 100,
    'machine_name' => 'ireq_user',
  );

  return $roles;
}
