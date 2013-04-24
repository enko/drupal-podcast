<?php
/**
 * @file
 * podcast.features.inc
 */

/**
 * Implements hook_views_api().
 */
function podcast_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function podcast_node_info() {
  $items = array(
    'chapter' => array(
      'name' => t('Chapter'),
      'base' => 'node_content',
      'description' => t('A Chapter of a episode'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'episode' => array(
      'name' => t('Episode'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'show' => array(
      'name' => t('Show'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
