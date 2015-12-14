<?php
/**
 * @file
 * vartest_feature.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function vartest_feature_default_rules_configuration() {
  $items = array();
  $items['rules_vartest_component'] = entity_import('rules_config', '{ "rules_vartest_component" : {
      "LABEL" : "Vartest component",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "vartest_rules" ],
      "ACTION SET" : [
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "This is the value of Rules \\u0022Variable\\u0022 with user-defined name \\u0022Param1\\u0022. And it\\u0027s defined before calling the action."
            },
            "PROVIDE" : { "variable_added" : { "param1" : "Param1" } }
          }
        },
        { "vartest_rules_action_test" : [] }
      ]
    }
  }');
  return $items;
}
