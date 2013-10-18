<?php

// Plugin definition
$plugin = array(
  'title' => t('Three column Responsive'),
  'category' => t('Columns: 3'),
  'icon' => 'threecol_resp.png',
  'theme' => 'threecol_resp',
  'css' => 'threecol_resp.css',
  'regions' => array(
    'content' => t('Content'),
    'sidebarfirst' => t('First Sidebar'),
    'sidebarsecond' => t('Second Sidebar')
   ),
);
