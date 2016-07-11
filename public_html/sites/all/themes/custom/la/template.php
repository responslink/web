<?php

/**
 * Implements theme_preprocess_html().
 */
function la_preprocess_html(&$variables) {
  $theme_path = path_to_theme();

  // Add conditional stylesheets
  drupal_add_css($theme_path . '/dist/css/stylesheet.css', array(
    'group' => CSS_THEME,
  ));
  drupal_add_js($theme_path . '/dist/js/modernizr.js', array(
    'group' => JS_LIBRARY,
  ));
  drupal_add_js($theme_path . '/dist/js/app.js', array(
    'group' => JS_THEME,
  ));
  drupal_add_js($theme_path . '/dist/js/ie9.js', array(
    'group' => JS_THEME,
    'browsers' => array('IE' => 'lte IE 9', '!IE' => FALSE),
  ));

  // Footer
  if (theme_get_setting('footer_attached')) {
    $variables['classes_array'][] = 'footer-attached';
  }
  if (theme_get_setting('footer_below')) {
    $variables['classes_array'][] = 'footer-below';
  }

  // Body classes
  $variables['classes_array'][] = 'simple-navigation-enabled-xs';
  $variables['classes_array'][] = 'simple-navigation-sticky';

  $variables['classes_array'][] = 'main-navigation-enabled-md';
  $variables['classes_array'][] = 'main-navigation-enabled-lg';

  // Load jQuery UI
  drupal_add_library('system', 'ui', TRUE);
}

/*
 * Implements theme_preprocess_page().
 */
function la_preprocess_page(&$variables) {
  $current_theme = variable_get('theme_default','none');
  $primary_navigation_name = variable_get('menu_main_links_source', 'main-menu');
  $secondary_navigation_name = variable_get('menu_secondary_links_source', 'user-menu');

  // Navigation
  $variables['main_navigation_primary'] = _bellcom_generate_menu($primary_navigation_name, 'main-navigation');

  // Tabs.
  $variables['tabs_primary'] = $variables['tabs'];
  $variables['tabs_secondary'] = $variables['tabs'];
  unset($variables['tabs_primary']['#secondary']);
  unset($variables['tabs_secondary']['#primary']);
}

/**
 * Implements template_preprocess_node.
 */
function la_preprocess_node(&$variables) {
  $node = $variables['node'];
  $variables['hero_class'] = 'os2-hero-without-image';

  // Background image (image path only)
  if ($field_image = field_get_items('node', $node, 'field_image')) {
    $variables['hero_class'] = 'os2-hero-with-image';
    
    if ($image_style_uri = _bellcom_get_image_url_by_style($field_image[0]['fid'], 'custom_content_image')) {
      $variables['custom_content_image'] = $image_style_uri;
    }
  }

  // Optionally, run node-type-specific preprocess functions, like
  // foo_preprocess_node_page() or foo_preprocess_node_story().
  $function_node_type = __FUNCTION__ . '__' . $node->type;
  $function_view_mode = __FUNCTION__ . '__' . $variables['view_mode'];
  if (function_exists($function_node_type)) {
    $function_node_type($variables);
  }
  if (function_exists($function_view_mode)) {
    $function_view_mode($variables);
  }
}

/*
 * Implements template_preprocess_node().
 * Content type: page.
 */
function la_preprocess_node__page(&$variables) {
  $node = $variables['node'];
}

/*
 * Implements template_preprocess_comment().
 */
function la_preprocess_comment(&$variables) {

  // Author
  if ($author_information = bellcom_user_get_raw_information($variables['comment']->uid)) {

    if (isset($author_information['full_name'])) {
      $variables['author_full_name'] = $author_information['full_name'];
    }
  }
}

/*
 * Implements template_node_view_alter().
 */
function la_node_view_alter(&$build) {
}

/*
 * Full node
 * Implements hook_preprocess_node().
 */
function la_preprocess_node__full(&$variables) {
}

/*
 * Implements template_preprocess_taxonomy_term().
 */
function la_preprocess_taxonomy_term(&$variables) {
  $term = $variables['term'];

  // Add taxonomy-term--view_mode.tpl.php suggestions.
  $variables['theme_hook_suggestions'][] = 'taxonomy_term__' . $variables['view_mode'];

  // Make "taxonomy-term--TERMTYPE--VIEWMODE.tpl.php" templates available for terms.
  $variables['theme_hook_suggestions'][] = 'taxonomy_term__' . $variables['vocabulary_machine_name'] . '__' . $variables['view_mode'];

  // Add a class for the view mode.
  $variables['classes_array'][] = 'view-mode-' . $variables['view_mode'];

  // Optionally, run node-type-specific preprocess functions, like
  // foo_preprocess_taxonomy_term_page() or foo_preprocess_taxonomy_term_story().
  $function_taxonomy_term_type = __FUNCTION__ . '__' . $variables['vocabulary_machine_name'];
  $function_view_mode = __FUNCTION__ . '__' . $variables['view_mode'];
  if (function_exists($function_taxonomy_term_type)) {
    $function_taxonomy_term_type($variables);
  }
  if (function_exists($function_view_mode)) {
    $function_view_mode($variables);
  }
}

/*
 * Implements hook_form_alter().
 */
function la_form_alter(&$form, &$form_state, $form_id) {

  switch ($form_id)  {
    // User login
    case 'user_login':
      break;

    // User registration
    case 'user_register_form':
      break;

    // Mailchimp
    case 'mailchimp_signup_subscribe_block_newsletter_form':
      $form['mergevars']['EMAIL']['#attributes'] = array('placeholder' => t('Enter your e-mail address'));
      
      break;
  }
}

/*
 * Implements hook_classy_paragraphs_list_options().
 */
function la_classy_paragraphs_list_options(&$variables) {

}
