<?php if ($view_mode == 'full'): ?>
<!-- paragraphs-item--content_action_box.tpl.php -->
<!-- Begin - paragraphs item -->
<div class="<?php print $classes; ?> os2-paragraphs-item-content os2-paragraphs-item-content-action-box"<?php print $attributes; ?>>

  <?php if (isset($content['field_icon'])): ?>
    <!-- Begin - icon -->
    <div class="os2-paragraphs-item-content-action-box-icon">
      <?php print render($content['field_icon']); ?>
    </div>
    <!-- End - icon -->
  <?php endif; ?>

  <?php if (isset($content['field_heading'])): ?>
    <!-- Begin - heading -->
    <div class="os2-paragraphs-item-content-action-box-heading">
      <?php print render($content['field_heading']); ?>
    </div>
    <!-- End - heading -->
  <?php endif; ?>

  <?php if (isset($content['field_body'])): ?>
    <!-- Begin - body -->
    <div class="os2-paragraphs-item-content-action-box-body">
      <?php print render($content['field_body']); ?>
    </div>
    <!-- End - body -->
  <?php endif; ?>

  <?php if (isset($content['field_link'])): ?>
    <!-- Begin - link -->
    <div class="os2-paragraphs-item-content-action-box-link">
      <?php print render($content['field_link']); ?>
    </div>
    <!-- End - link -->
  <?php endif; ?>

</div>
<!-- End - paragraphs item -->
<?php endif; ?>
