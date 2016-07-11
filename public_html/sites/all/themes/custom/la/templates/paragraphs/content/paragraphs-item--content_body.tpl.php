<?php if ($view_mode == 'full'): ?>
<!-- paragraphs-item--content_body.tpl.php -->
<!-- Begin - paragraphs item -->
<div class="<?php print $classes; ?> os2-paragraphs-item-content os2-paragraphs-item-content-body"<?php print $attributes; ?>>

  <?php if (isset($content['field_heading'])): ?>
    <!-- Begin - heading -->
    <div class="os2-paragraphs-item-heading os2-paragraphs-item-content-body-heading">
      <?php print render($content['field_heading']); ?>
    </div>
    <!-- End - heading -->
  <?php endif; ?>

  <?php if (isset($content['field_subheading'])): ?>
    <!-- Begin - subheading -->
    <div class="os2-paragraphs-item-subheading os2-paragraphs-item-content-body-subheading">
      <?php print render($content['field_subheading']); ?>
    </div>
    <!-- End - subheading -->
  <?php endif; ?>

  <?php if (isset($content['field_body'])): ?>
    <!-- Begin - body -->
    <div class="os2-paragraphs-item-content-body-body">
      <?php print render($content['field_body']); ?>
    </div>
    <!-- End - body -->
  <?php endif; ?>

</div>
<!-- End - paragraphs item -->
<?php endif; ?>
