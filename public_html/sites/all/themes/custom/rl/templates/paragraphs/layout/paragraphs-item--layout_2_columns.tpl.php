<?php if ($view_mode == 'full'): ?>
  <!-- paragraphs-item--layout_2_columns.tpl.php -->
  <!-- Begin - paragraphs item -->
  <div class="<?php print $classes; ?> os2-paragraphs-item os2-paragraphs-item-2-columns"<?php print $attributes; ?>>
    <div class="os2-paragraphs-item-inner-wrapper os2-paragraphs-item-2-columns-inner-wrapper">
      <div class="container">

        <?php if (isset($content['field_heading']) || isset($content['field_subheading'])): ?>
          <div class="row os2-paragraphs-item-heading-wrapper os2-paragraphs-item-2-columns-heading-wrapper">
            <div class="col-xs-12">

              <?php if (isset($content['field_heading'])): ?>
                <!-- Begin - heading -->
                <div class="os2-paragraphs-item-heading os2-paragraphs-item-2-columns-heading">
                  <?php print render($content['field_heading']); ?>
                </div>
                <!-- End - heading -->
              <?php endif; ?>

              <?php if (isset($content['field_subheading'])): ?>
                <!-- Begin - subheading -->
                <div class="os2-paragraphs-item-subheading os2-paragraphs-item-2-columns-subheading">
                  <?php print render($content['field_subheading']); ?>
                </div>
                <!-- End - subheading -->
              <?php endif; ?>

            </div>
          </div>
        <?php endif; ?>

        <div class="row os2-paragraphs-item-column-wrapper os2-paragraphs-item-2-columns-column-wrapper">

          <!-- Begin - column 1 -->
          <div class="col-xs-12 col-sm-6">
            <div class="os2-paragraphs-item-column os2-paragraphs-item-column-1 os2-paragraphs-item-2-columns-column-1">

              <?php if (isset($content['field_col1_paragraphs'])): ?>
                <!-- Begin - paragraphs -->
                <div class="os2-paragraphs-item-column-paragraphs os2-paragraphs-item-column-layout-column-1-paragraphs os2-paragraphs-item-column-layout-2-columns-column-1-paragraphs">
                  <?php print render($content['field_col1_paragraphs']); ?>
                </div>
                <!-- End - paragraphs -->
              <?php endif; ?>

            </div>
          </div>
          <!-- End - column 1 -->

          <!-- Begin - column 2 -->
          <div class="col-xs-12 col-sm-6">
            <div class="os2-paragraphs-item-column os2-paragraphs-item-column-2 os2-paragraphs-item-2-columns-column-2">

              <?php if (isset($content['field_col2_paragraphs'])): ?>
                <!-- Begin - paragraphs -->
                <div class="os2-paragraphs-item-column-paragraphs os2-paragraphs-item-column-layout-column-2-paragraphs os2-paragraphs-item-column-layout-2-columns-column-2-paragraphs">
                  <?php print render($content['field_col2_paragraphs']); ?>
                </div>
                <!-- End - paragraphs -->
              <?php endif; ?>

            </div>
          </div>
          <!-- End - column 2 -->

        </div>

        <?php if (isset($content['field_link'])): ?>
          <div class="row os2-paragraphs-item-action-link-wrapper os2-paragraphs-item-2-columns-action-link-wrapper">
            <div class="col-xs-12">

              <?php if (isset($content['field_link'])): ?>
                <!-- Begin - action link -->
                <div class="os2-paragraphs-item-action-link os2-paragraphs-item-2-columns-action-link">
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
