<?php if ($view_mode == 'full'): ?>
<!-- paragraphs-item--content_employee_carousel.tpl.php -->
<!-- Begin - paragraphs item -->
<div class="<?php print $classes; ?> os2-paragraphs-item-content os2-paragraphs-item-content-employee-carousel"<?php print $attributes; ?>>

  <?php if (isset($content['field_employee_view'])): ?>
    <!-- Begin - employee view -->
    <div class="os2-paragraphs-item-content-employee-view os2-equal-height-wrapper">
      <?php print render($content['field_employee_view']); ?>
    </div>
    <!-- End - employee view -->
  <?php endif; ?>

</div>
<!-- End - paragraphs item -->
<?php endif; ?>
