<?php
/**
 * @file
 * crf_users.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function crf_users_default_rules_configuration() {
  $items = array();
  $items['rules_add_editor_user_for_newly_created_contact'] = entity_import('rules_config', '{ "rules_add_editor_user_for_newly_created_contact" : {
      "LABEL" : "Add editor user for newly created contact",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [ { "data_is" : { "data" : [ "node:type" ], "value" : "contact" } } ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "user",
              "param_field_first_name" : [ "node:field-contact-first-name" ],
              "param_field_job_title" : [ "node:field-contact-job-title" ],
              "param_field_last_name" : [ "node:field-contact-lastname" ],
              "param_field_organization" : [ "node:field-organizations:0" ],
              "param_name" : [ "node:field-contact-email" ],
              "param_mail" : [ "node:field-contact-email" ]
            },
            "PROVIDE" : { "entity_created" : { "new_user" : "New user" } }
          }
        },
        { "entity_save" : { "data" : [ "new-user" ], "immediate" : 1 } },
        { "user_add_role" : {
            "account" : [ "new-user" ],
            "roles" : { "value" : { "200153887" : "200153887" } }
          }
        },
        { "user_unblock" : { "account" : [ "new-user" ] } }
      ]
    }
  }');
  return $items;
}
