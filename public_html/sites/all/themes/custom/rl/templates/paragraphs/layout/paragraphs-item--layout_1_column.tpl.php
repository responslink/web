<?php if ($view_mode == 'full'): ?>
<!-- paragraphs-item--layout_1_column.tpl.php -->
<!-- Begin - paragraphs item -->
<div class="<?php print $classes; ?> os2-paragraphs-item os2-paragraphs-item-1-column"<?php print $attributes; ?>>
  <div class="os2-paragraphs-item-inner-wrapper os2-paragraphs-item-1-column-inner-wrapper">
    <div class="container">

      <?php if (isset($content['field_heading']) || isset($content['field_subheading'])): ?>
        <div class="row os2-paragraphs-item-heading-wrapper os2-paragraphs-item-1-column-heading-wrapper">
          <div class="col-xs-12">

            <?php if (isset($content['field_heading'])): ?>
              <!-- Begin - heading -->
              <div class="os2-paragraphs-item-heading os2-paragraphs-item-1-column-heading">
                <?php print render($content['field_heading']); ?>
              </div>
              <!-- End - heading -->
            <?php endif; ?>

            <?php if (isset($content['field_subheading'])): ?>
              <!-- Begin - subheading -->
              <div class="os2-paragraphs-item-subheading os2-paragraphs-item-1-column-subheading">
                <?php print render($content['field_subheading']); ?>
              </div>
              <!-- End - subheading -->
            <?php endif; ?>

          </div>
        </div>
      <?php endif; ?>

      <div class="row os2-paragraphs-item-column-wrapper os2-paragraphs-item-1-column-column-wrapper">

        <!-- Begin - column 1 -->
        <div class="col-xs-12">
          <div class="os2-paragraphs-item-column os2-paragraphs-item-column-1 os2-paragraphs-item-1-column-column-1">

            <?php if (isset($content['field_col1_paragraphs'])): ?>
              <!-- Begin - paragraphs -->
              <div class="os2-paragraphs-item-column-paragraphs os2-paragraphs-item-column-layout-column-1-paragraphs os2-paragraphs-item-column-layout-1-column-column-1-paragraphs">
                <?php print render($content['field_col1_paragraphs']); ?>
              </div>
              <!-- End - paragraphs -->
            <?php endif; ?>

          </div>
        </div>
        <!-- End - column 1 -->

      </div>

      <?php if (isset($content['field_link'])): ?>
        <div class="row os2-paragraphs-item-action-link-wrapper os2-paragraphs-item-1-column-action-link-wrapper">
          <div class="col-xs-12">

            <?php if (isset($content['field_link'])): ?>
              <!-- Begin - action link -->
              <div class="os2-paragraphs-item-action-link os2-paragraphs-item-1-column-action-link">
                <?php print render($content['field_link']); ?>
              </div>
              <!-- End - action link -->
            <?php endif; ?>

          </div>
        </div>
      <?php endif; ?>

    </div>
  </div>
</div>
<!-- End - paragraphs item -->
<?php endif; ?>
