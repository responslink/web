<?php if ($view_mode == 'teaser'): ?>
  <!-- node--audio--teaser.tpl.php -->
  <!-- Begin - teaser -->
  <section id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-teaser os2-node-teaser-audio"<?php print $attributes; ?>>
    <div class="os2-node-teaser-audio-image-wrapper">

      <?php if (isset($content['field_audio_image'])): ?>
        <!-- Begin - audio image -->
        <div class="os2-node-teaser-audio-image">
          <?php print render($content['field_audio_image']); ?>
        </div>
        <!-- End - audio image -->
      <?php endif; ?>

    </div>
    <div class="os2-node-teaser-body">

      <!-- Begin - heading -->
      <h3<?php print $title_attributes; ?> class="os2-node-teaser-audio-title"><?php print $title; ?></h3>
      <!-- End - heading -->

      <?php if (isset($content['field_speaker'])): ?>
        <!-- Begin - speaker -->
        <div class="os2-node-teaser-speaker">
          <?php print render($content['field_speaker']); ?>
        </div>
        <!-- End - speaker -->
      <?php endif; ?>

      <?php if (isset($content['field_audio_file'])): ?>
        <!-- Begin - audio file -->
        <div class="os2-node-teaser-audio-file">
        </div>
        <!-- End - audio file -->
      <?php endif; ?>

    </div>
  </section>
  <!-- End - teaser -->

<?php endif; ?>
