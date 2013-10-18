<?php
/**
 * @file
 * Template for a 3 column responsive panel layout.
 *
 * This template provides a three column layout to be used in conjunction
 * with Zen Grids.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['content']: Content in the content area.
 *   - $content['middle']: Content in the first sidebar column.
 *   - $content['right']: Content in the second sidebar column.
 */
?>

<div class="panel-display panel-2col-resp clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-panel panel-col-content">
    <div class="inside"><?php print $content['content']; ?></div>
  </div>

  <div class="panel-panel panel-col-sidebar-first">
    <div class="inside"><?php print $content['sidebarfirst']; ?></div>
  </div>
</div>
