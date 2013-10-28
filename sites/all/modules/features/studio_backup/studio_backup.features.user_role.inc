<?php
/**
 * @file
 * studio_backup.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function studio_backup_user_default_roles() {
  $roles = array();

  // Exported role: Employee.
  $roles['Employee'] = array(
    'name' => 'Employee',
    'weight' => 4,
  );

  // Exported role: Owner.
  $roles['Owner'] = array(
    'name' => 'Owner',
    'weight' => 3,
  );

  return $roles;
}
