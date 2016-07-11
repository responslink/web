<?php if ($view_mode == 'teaser'): ?>
  <!-- node--testimonial--teaser.tpl.php -->
  <!-- Begin - teaser -->
  <section id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-teaser os2-node-teaser-testimonial"<?php print $attributes; ?>>

    <!-- Begin - body -->
    <div class="os2-node-teaser-body">

      <?php if (isset($content['body'])): ?>
        <!-- Begin - statement -->
        <div
          class="os2-node-teaser-statement">
          <?php print render($content['body']); ?>
        </div>
        <!-- End - statement -->
      <?php endif; ?>

    </div>
    <!-- End - body -->

    <!-- Begin - footer -->
    <div class="os2-node-teaser-footer">
      <div class="table">
        <div class="table-row">
          <div class="table-cell os2-node-teaser-sender-image-wrapper">

            <?php if (isset($content['field_sender_image'])): ?>
              <!-- Begin - image -->
              <div
                class="os2-node-teaser-sender-image">
                <?php print render($content['field_sender_image']); ?>
              </div>
              <!-- End - image -->
            <?php endif; ?>

          </div>
          <div class="table-cell">

            <?php if (isset($content['field_sender_name'])): ?>
              <!-- Begin - name -->
              <div
                class="os2-node-teaser-sender-name">
                <?php print render($content['field_sender_name']); ?>
              </div>
              <!-- End - name -->
            <?php endif; ?>

            <?php if (isset($content['field_company'])): ?>
              <!-- Begin - company -->
              <div
                class="os2-node-teaser-company">
                <?php print render($content['field_company']); ?>
              </div>
              <!-- End - company -->
            <?php endif; ?>

          </div>
        </div>
      </div>

    </div>
    <!-- End - footer -->

  </section>
  <!-- End - teaser -->

<?php endif; ?>
