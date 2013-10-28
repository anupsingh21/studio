<?php
/**
 * @file
 * studio_backup.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function studio_backup_image_default_styles() {
  $styles = array();

  // Exported image style: job_view.
  $styles['job_view'] = array(
    'name' => 'job_view',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 600,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function studio_backup_node_info() {
  $items = array(
    'booking' => array(
      'name' => t('Booking'),
      'base' => 'node_content',
      'description' => t('new booking'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'job' => array(
      'name' => t('Job'),
      'base' => 'node_content',
      'description' => t('New job in the studio'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
