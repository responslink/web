<?php
/**
 * @file
 * os2_user_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function os2_user_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: profile_image_default.
  $styles['profile_image_default'] = array(
    'label' => 'Profile image - default',
    'effects' => array(
      5 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 140,
          'height' => 140,
          'anchor' => 'center-center',
          'disable_scale' => 0,
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'white',
            'bgopacity' => 0.6,
            'fallback' => 1,
          ),
        ),
        'weight' => -10,
      ),
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 140,
          'height' => 140,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: profile_image_extra_large.
  $styles['profile_image_extra_large'] = array(
    'label' => 'Profile image - extra large',
    'effects' => array(
      18 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 600,
          'height' => 600,
          'anchor' => 'center-center',
          'disable_scale' => 0,
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 0,
          ),
        ),
        'weight' => 1,
      ),
      19 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 600,
          'height' => 600,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: profile_image_large.
  $styles['profile_image_large'] = array(
    'label' => 'Profile image - large',
    'effects' => array(
      6 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 250,
          'height' => 250,
          'anchor' => 'center-center',
          'disable_scale' => 0,
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'white',
            'bgopacity' => 0.6,
            'fallback' => 1,
          ),
        ),
        'weight' => -10,
      ),
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 250,
          'height' => 250,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: profile_image_mini.
  $styles['profile_image_mini'] = array(
    'label' => 'Profile image - mini',
    'effects' => array(
      7 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 72,
          'height' => 72,
          'anchor' => 'center-center',
          'disable_scale' => 0,
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'white',
            'bgopacity' => 0.6,
            'fallback' => 1,
          ),
        ),
        'weight' => -10,
      ),
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 72,
          'height' => 72,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: profile_image_small.
  $styles['profile_image_small'] = array(
    'label' => 'Profile image - small',
    'effects' => array(
      8 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 116,
          'height' => 116,
          'anchor' => 'center-center',
          'disable_scale' => 0,
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'white',
            'bgopacity' => 0.6,
            'fallback' => 1,
          ),
        ),
        'weight' => -10,
      ),
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 116,
          'height' => 116,
        ),
        'weight' => -9,
      ),
    ),
  );

  return $styles;
}
