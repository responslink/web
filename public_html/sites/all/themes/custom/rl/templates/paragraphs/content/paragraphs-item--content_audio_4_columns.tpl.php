<?php if ($view_mode == 'full'): ?>
<!-- paragraphs-item--content_audio_4_columns.tpl.php -->
<!-- Begin - paragraphs item -->
<div class="<?php print $classes; ?> os2-paragraphs-item-content os2-paragraphs-item-content-audio-4-columns"<?php print $attributes; ?>>

  <?php if (isset($content['field_audio_view'])): ?>
    <!-- Begin - audio playlist -->
    <div class="os2-paragraphs-item-content-audio-playlist-view">
      <?php print render($content['field_audio_view']); ?>
    </div>
    <!-- End - audio playlist -->
  <?php endif; ?>

</div>
<!-- End - paragraphs item -->
<?php endif; ?>
