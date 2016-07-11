<?php
/**
 * @file
 * os2_paragraphs_portfolio.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function os2_paragraphs_portfolio_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-portfolio-field_logo'.
  $field_instances['node-portfolio-field_logo'] = array(
    'bundle' => 'portfolio',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_logo',
    'label' => 'Logo',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'epsacrop' => array(
        'styles' => array(
          'portfolio_small' => 'portfolio_small',
        ),
      ),
      'file_directory' => 'portfolio-logos',
      'file_extensions' => 'png',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '450x300',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => '',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'node-portfolio-field_reference_category'.
  $field_instances['node-portfolio-field_reference_category'] = array(
    'bundle' => 'portfolio',
    'default_value' => array(
      0 => array(
        'tid' => 2,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_reference_category',
    'label' => 'Kategori',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 42,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-content_portfolio_stacked-field_portfolio_view'.
  $field_instances['paragraphs_item-content_portfolio_stacked-field_portfolio_view'] = array(
    'bundle' => 'content_portfolio_stacked',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_embed_views',
        'settings' => array(),
        'type' => 'field_embed_views_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_portfolio_view',
    'label' => 'Portfolio items',
    'required' => 1,
    'settings' => array(
      'display_name' => 'block_stacked',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
      'view_name' => 'paragraphs_portfolio',
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_embed_views',
      'settings' => array(),
      'type' => 'field_embed_views',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Kategori');
  t('Logo');
  t('Portfolio items');

  return $field_instances;
}
