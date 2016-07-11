<?php if ($view_mode == 'full'): ?>
<!-- paragraphs-item--content_portfolio_stacked.tpl.php -->
<!-- Begin - paragraphs item -->
<div class="<?php print $classes; ?> os2-paragraphs-item-content os2-paragraphs-item-content-portfolio-stacked"<?php print $attributes; ?>>

  <?php if (isset($content['field_portfolio_view'])): ?>
    <!-- Begin - portfolio view -->
    <div class="os2-paragraphs-item-content-portfolio-view">
      <?php print render($content['field_portfolio_view']); ?>
    </div>
    <!-- End - portfolio view -->
  <?php endif; ?>

</div>
<!-- End - paragraphs item -->
<?php endif; ?>
