<?php if ($view_mode == 'full'): ?>
<!-- paragraphs-item--content_call_to_action.tpl.php -->
<!-- Begin - paragraphs item -->
<div class="<?php print $classes; ?> os2-paragraphs-item-content os2-paragraphs-item-content-call-to-action"<?php print $attributes; ?>>

  <?php if (isset($content['field_text'])): ?>
    <!-- Begin - text -->
    <div class="os2-paragraphs-item-content-call-to-action-text">
      <?php print render($content['field_text']); ?>
    </div>
    <!-- End - text -->
  <?php endif; ?>

  <?php if (isset($content['field_link'])): ?>
    <!-- Begin - link -->
    <div class="os2-paragraphs-item-content-call-to-action-link">
      <?php print render($content['field_link']); ?>
    </div>
    <!-- End - link -->
  <?php endif; ?>

</div>
<!-- End - paragraphs item -->
<?php endif; ?>
