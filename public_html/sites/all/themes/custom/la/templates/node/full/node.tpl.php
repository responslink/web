<?php if ($view_mode == 'full'): ?>
  <!-- node.tpl.php -->
  <!-- Begin - full node -->
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-full"<?php print $attributes; ?>>

    <!-- Begin - hero -->
    <div class="os2-hero <?php print $hero_class; ?>" <?php if (isset($custom_content_image)): ?> style="background-image: url(<?php print $custom_content_image; ?>)" <?php endif; ?>>
      <div class="background-overlay-dark">
        <div class="os2-hero-inner-wrapper">
          <div class="container">
            <div class="row">
              <div class="col-xs-12 os2-hero-headings-wrapper">

                <!-- Begin - heading -->
                <div class="os2-hero-heading<?php if (isset($custom_content_image)): ?> os2-hero-element-dissolve os2-hero-element-move-on-scroll <?php endif; ?>">
                  <?php print render($title_prefix); ?>
                  <h1<?php print $title_attributes; ?> class="os2-hero-heading-title"><?php print $title; ?></h1>
                  <?php print render($title_suffix); ?>
                </div>
                <!-- End - heading -->

                <?php if (isset($content['field_subheading'])): ?>
                  <!-- Begin - subheading -->
                  <div class="os2-hero-subheading<?php if (isset($custom_content_image)): ?> os2-hero-element-dissolve os2-hero-element-move-on-scroll <?php endif; ?>">
                    <?php print render($content['field_subheading']); ?>
                  </div>
                  <!-- End - subheading -->
                <?php endif; ?>

              </div>
            </div>
          </div>
        </div>
      </div>
    </div>
    <!-- End - hero -->

    <?php if (isset($content['body'])): ?>
      <!-- Begin - body -->
      <div class="os2-node-full-body">
        <div class="container">
          <?php print render($content['body']); ?>
        </div>
      </div>
      <!-- End - body -->
    <?php endif; ?>

    <?php if (isset($content['field_paragraphs'])): ?>
      <!-- Begin - paragraphs -->
      <div class="os2-node-full-paragraphs">
        <?php print render($content['field_paragraphs']); ?>
      </div>
      <!-- End - paragraphs -->
    <?php endif; ?>

  </div>
  <!-- End - full node -->

<?php endif; ?>
