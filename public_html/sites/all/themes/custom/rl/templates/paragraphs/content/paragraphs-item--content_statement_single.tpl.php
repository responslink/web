<?php if ($view_mode == 'full'): ?>
<!-- paragraphs-item--content_statement_stacked.tpl.php -->
<!-- Begin - paragraphs item -->
<div class="<?php print $classes; ?> os2-paragraphs-item-content os2-paragraphs-item-content-statement os2-paragraphs-item-content-statement-single"<?php print $attributes; ?>>

  <?php if (isset($content['field_statement_view'])): ?>
    <!-- Begin - statement view -->
    <div class="os2-paragraphs-item-content-statement-view">
      <?php print render($content['field_statement_view']); ?>
    </div>
    <!-- End - statement view -->
  <?php endif; ?>

</div>
<!-- End - paragraphs item -->
<?php endif; ?>
