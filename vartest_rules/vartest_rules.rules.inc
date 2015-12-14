<?php

/**
 * Implements hook_rules_action_info().
 */
function vartest_rules_rules_action_info() {
  return array(
    'vartest_rules_action_test' => array(
      'label' => t('Vartest Action'),
      'group' => t('Data'),
      'parameter' => array(
        'param1' => array(
          'type' => 'text',
          'label' => t('Param1'),
          'description' => t("Param1"),
          'optional' => TRUE,
        ),
      ),
    ),
  );
}

function vartest_rules_action_test($param1 = NULL) {
  drupal_set_message('$param1 value should be NULL, but it\'s: "' . $param1 . '"');
}
