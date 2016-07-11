<!-- Begin - outer wrapper -->
<div class="outer-wrapper">

    <!-- Begin - sidebar left -->
    <div class="sidebar sidebar-left">

        <!-- Begin - inner wrapper -->
        <div class="sidebar-inner-wrapper">

            <!-- Begin - logo -->
            <div class="sidebar-logo">
                <a href="<?php echo $front_page; ?>" class="sidebar-logo-link">
                    <img src="<?php echo $path_img . '/logo-sidebar-wide.png'; ?>"
                         class="sidebar-logo-image sidebar-logo-image-wide"
                         alt="<?php echo $site_name . t(' logo'); ?>"/>
                    <img src="<?php echo $path_img . '/logo-sidebar-narrow.png'; ?>"
                         class="sidebar-logo-image sidebar-logo-image-narrow"
                         alt="<?php echo $site_name . t(' logo'); ?>"/>
                </a>
            </div>
            <!-- End - logo -->

            <?php if (isset($sidebar_primary)): ?>
                <!-- Begin - navigation -->
                <?php print render($sidebar_primary); ?>
                <!-- End - navigation -->
            <?php endif; ?>

        </div>
        <!-- End - inner wrapper -->

    </div>
    <!-- End - sidebar left -->

    <!-- Begin - inner wrapper -->
    <div class="inner-wrapper" role="document">

        <!-- Begin - simple navigation -->
        <nav class="simple-navigation">

            <!-- Begin - button list -->
            <ul class="simple-navigation-list simple-navigation-list-left">

                <!-- Begin - button -->
                <li class="simple-navigation-button">
                    <a href="#" data-sidebar-toggle="left">
                        <span class="fa icon fa-bars"></span> </a>
                </li>
                <!-- End - button -->

            </ul>
            <!-- End - button list -->

            <!-- Begin - logo -->
            <a href="<?php echo $front_page; ?>" class="simple-navigation-logo-link">
                <img src="<?php echo $path_img . '/logo-simple-navigation.png'; ?>" class="simple-navigation-logo-image"
                     alt="<?php echo t('respons.link logo'); ?>"/>
            </a>
            <!-- End - logo -->

        </nav>
        <!-- End - simple navigation -->

        <!-- Begin - content -->
        <div class="content">

            <!-- Begin - main navigation -->
            <nav class="main-navigation-wrapper main-navigation-static-float">
                <section class="main-navigation-bar">
                    <div class="container">
                        <div class="row">

                            <!-- Begin - content -->
                            <div class="col-md-4">
                                <a href="<?php echo $front_page; ?>" class="main-navigation-logo-link">
                                    <img src="<?php echo $path_img; ?>/logo-main-navigation.png" alt=""
                                         class="main-navigation-logo-image">
                                </a>
                            </div>
                            <!-- End - content -->

                            <!-- Begin - content -->
                            <?php if (isset($main_navigation_primary)): ?>
                                <div class="col-md-8 main-navigation-right">

                                    <!-- Begin - navigation -->
                                    <?php print render($main_navigation_primary); ?>
                                    <!-- End - navigation -->

                                </div>
                            <?php endif; ?>
                            <!-- End - content -->

                        </div>
                    </div>
                </section>
            </nav>
            <!-- End - main navigation -->

            <div class="container">

                <?php if (!empty($page['help'])): ?>
                    <?php print render($page['help']); ?>
                <?php endif; ?>

                <?php if (!empty($action_links)): ?>
                    <ul class="action-links"><?php print render($action_links); ?></ul>
                <?php endif; ?>

                <?php if (!empty($tabs_primary['#primary'])): ?>
                    <!-- Begin - tabs primary -->
                    <div class="os2-floating-tabs-container os2-floating-tabs-variant-primary">
                        <?php print render($tabs_primary); ?>
                    </div>
                    <!-- End - tabs primary -->
                <?php endif; ?>

                <?php print $messages; ?>

            </div>

            <a id="main-content"></a>

            <?php if (panels_get_current_page_display()): ?>
                <?php print render($page['content']); ?>
            <?php else: ?>
                <div class="container">
                    <div class="os2-box">
                        <div class="os2-box-body">
                            <?php print render($page['content']); ?>
                        </div>
                    </div>
                </div>
            <?php endif; ?>

        </div>
        <!-- End - content -->

        <!-- Begin - footer -->
        <footer class="footer">

            <!-- Begin - newsletter -->
            <?php if (!empty($page['newsletter'])): ?>
                <div class="newsletter">
                    <div class="container">
                        <div class="row">
                            <div class="col-xs-12">
                                <div class="newsletter-heading">
                                    <h2 class="newsletter-heading-title"><?php print t('Sign up for our newsletter'); ?></h2>
                                </div>
                            </div>
                        </div>
                        <div class="row">
                            <div class="col-xs-12">
                                <?php print render($page['newsletter']); ?>
                            </div>
                        </div>
                    </div>
                </div>
            <?php endif; ?>
            <!-- End - newsletter -->

            <!-- Begin - contact information -->
            <?php if (!empty($page['contact_information'])): ?>
                <div class="contact-information">
                    <div class="container">
                        <div class="row">
                            <div class="col-xs-12">
                                <?php print render($page['contact_information']); ?>
                            </div>
                        </div>
                    </div>
                </div>
            <?php endif; ?>
            <!-- End - contact information -->

            <!-- Begin - copyright -->
            <?php if (!empty($page['footer'])): ?>
                <div class="footer-copyright">
                    <div class="footer-copyright-inner">
                        <div class="container">
                            <div class="row">
                                <div class="col-xs-12">
                                    <?php print render($page['footer']); ?>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
            <?php endif; ?>
            <!-- End - copyright-->

        </footer>
        <!-- End - footer -->

    </div>
    <!-- End - inner wrapper -->

</div>
<!-- End - outer wrapper -->
