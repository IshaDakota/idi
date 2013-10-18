<?php

// Plugin definition
$plugin = array(
  'title' => t('Two column Responsive'),
  'category' => t('Columns: 2'),
  'icon' => 'twocol_resp.png',
  'theme' => 'twocol_resp',
  'css' => 'twocol_resp.css',
  'regions' => array(
    'content' => t('Content'),
    'sidebarfirst' => t('First Sidebar'),
   ),
);
