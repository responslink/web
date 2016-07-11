<?php if ($view_mode == 'teaser'): ?>
  <!-- node--employee--teaser.tpl.php -->
  <!-- Begin - teaser -->
  <section id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-teaser os2-node-teaser-employee os2-equal-height-element"<?php print $attributes; ?>>

    <?php if (isset($content['field_profile_image'])): ?>
      <!-- Begin - profile image -->
      <div class="os2-node-teaser-profile-image">
        <?php print render($content['field_profile_image']); ?>
      </div>
      <!-- End - profile image -->
    <?php endif; ?>

    <?php if (isset($content['field_full_name'])): ?>
      <!-- Begin - name -->
      <div class="os2-node-teaser-full-name">
        <?php print render($content['field_full_name']); ?>
      </div>
      <!-- End - name -->
    <?php endif; ?>

    <?php if (isset($content['field_job_position'])): ?>
      <!-- Begin - job position -->
      <div class="os2-node-teaser-job-position">
        <?php print render($content['field_job_position']); ?>
      </div>
      <!-- End - job position -->
    <?php endif; ?>

    <?php if (isset($content['body'])): ?>
      <!-- Begin - body -->
      <div class="os2-node-teaser-body">
        <?php print render($content['body']); ?>
      </div>
      <!-- End - body -->
    <?php endif; ?>

  </section>
  <!-- End - teaser -->

<?php endif; ?>
