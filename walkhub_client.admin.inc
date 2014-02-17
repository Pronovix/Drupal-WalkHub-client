<?php

/**
 * Form callback for 'admin/config/services/walkhub_client'.
 */
function walkhub_client_configuration_form($form) {
  $form['configuration']['walkhub_hub_origin'] = array(
    '#type' => 'textfield',
    '#title' => t('Walkhub origin'),
    '#default_value' => variable_get('walkhub_hub_origin'),
  );

  return system_settings_form($form);
}
