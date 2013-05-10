crf_users
---------

FILE: crf_users.features.field.inc

Implements hook_field_default_fields().
  function crf_users_field_default_fields()

Fields:
  user-user-field_clusters
  user-user-field_first_name
  user-user-field_job_title
  user-user-field_last_name
  user-user-field_locations
  user-user-field_organisation


FILE: crf_users.rules_defaults.inc

Implements hook_default_rules_configuration().
function crf_users_default_rules_configuration()

Rules:
  rules_add_editor_user_for_newly_created_contact

