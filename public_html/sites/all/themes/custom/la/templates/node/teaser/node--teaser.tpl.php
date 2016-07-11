<?php if ($view_mode == 'teaser'): ?>
  <!-- node--teaser.tpl.php -->
  <!-- Begin - teaser -->
  <section id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-teaser"<?php print $attributes; ?>>

    <!-- Begin - heading -->
    <div class="os2-node-teaser-heading">
      <h3 class="os2-node-teaser-heading-title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
    </div>
    <!-- End - heading -->

    <!-- Begin - body -->
    <div class="os2-node-teaser-body">

      <?php if (isset($content['body'])): ?>
        <!-- Begin - body -->
        <div class="os2-node-teaser-body-content">
          <?php print render($content['body']); ?>
        </div>
        <!-- End - body -->
      <?php endif; ?>

    </div>
    <!-- End - body -->

  </section>
  <!-- End - teaser -->

<?php endif; ?>
