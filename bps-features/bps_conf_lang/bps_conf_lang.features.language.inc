<?php
/**
 * @file
 * bps_conf_lang.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function bps_conf_lang_locale_default_languages() {
  $languages = array();

  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'en',
    'weight' => 0,
  );
  // Exported language: pl.
  $languages['pl'] = array(
    'language' => 'pl',
    'name' => 'Polish',
    'native' => 'Polski',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'pl',
    'weight' => 0,
  );
  return $languages;
}
