<!-- 1-column.tpl.php -->
<div class="row" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

    <!-- Begin - content -->
    <div class="col-xs-12">
        <?php print $content['content']; ?>
    </div>
    <!-- End - content -->

</div>
