<?php
/**
 * @file
 * bps_ct_base.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function bps_ct_base_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gr_tab1|node|article|form';
  $field_group->group_name = 'group_gr_tab1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_gr_wrap';
  $field_group->data = array(
    'label' => 'Basic data',
    'weight' => '7',
    'children' => array(
      0 => 'body',
      1 => 'field_tags',
      2 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gr-tab1 field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_gr_tab1|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gr_tab1|node|page|form';
  $field_group->group_name = 'group_gr_tab1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_gr_wrap';
  $field_group->data = array(
    'label' => 'Basic data',
    'weight' => '7',
    'children' => array(
      0 => 'body',
      1 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gr-tab1 field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_gr_tab1|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gr_tab1|node|webform|form';
  $field_group->group_name = 'group_gr_tab1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'webform';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_gr_wrap';
  $field_group->data = array(
    'label' => 'Basic data',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gr-tab1 field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_gr_tab1|node|webform|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gr_tab2|node|page|form';
  $field_group->group_name = 'group_gr_tab2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_gr_wrap';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '8',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gr-tab2 field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_gr_tab2|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gr_wrap|node|article|form';
  $field_group->group_name = 'group_gr_wrap';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Base group',
    'weight' => '0',
    'children' => array(
      0 => 'field_image',
      1 => 'group_gr_tab1',
      2 => 'group_gr_tab2',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-gr-wrap field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_gr_wrap|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gr_wrap|node|page|form';
  $field_group->group_name = 'group_gr_wrap';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Base group',
    'weight' => '0',
    'children' => array(
      0 => 'group_gr_tab1',
      1 => 'group_gr_tab2',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-gr-wrap field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_gr_wrap|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gr_wrap|node|webform|form';
  $field_group->group_name = 'group_gr_wrap';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'webform';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Base group',
    'weight' => '0',
    'children' => array(
      0 => 'group_gr_tab1',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-gr-wrap field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_gr_wrap|node|webform|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Base group');
  t('Basic data');
  t('Media');

  return $field_groups;
}
