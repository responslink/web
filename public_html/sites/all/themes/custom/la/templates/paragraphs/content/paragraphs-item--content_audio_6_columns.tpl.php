<?php if ($view_mode == 'full'): ?>
<!-- paragraphs-item--content_audio_6_columns.tpl.php -->
<!-- Begin - paragraphs item -->
<div class="<?php print $classes; ?> os2-paragraphs-item-content os2-paragraphs-item-content-audio-6-columns"<?php print $attributes; ?>>

  <!-- Begin - jPlayer -->
  <div id="jquery_jplayer_1" class="jp-jplayer"></div>
  <div id="jp_container_N" class="jp-video jp-video-270p">

    <div class="jp-type-playlist">
      <div class="bsg-player fix-botto" id="jp_container_1">
        <div class="container" style="background-color:ed;">

          <ul class="player-buttons jp-controls list-inline">
            <li class="previous"><a href="javascript:;" class="jp-previous"><i
                  class="fa fa-fast-backward"></i></a></li>
            <li class="play"><a href="javascript:;" class="jp-play"><i
                  class="fa fa-play"></i></a><a href="javascript:;"
                                                class="jp-pause"><i
                  class="fa fa-pause"></i></a></li>
            <li class="next"><a href="javascript:;" class="jp-next"><i
                  class="fa fa-fast-forward"></i></a></li>
          </ul>

          <div class="album-details">
            <div class="album-art  "><img src="images/albumart.jpg" alt="">
            </div>
            <div class="album-info">
              <h4 class="title"> Hangover - DownloadMing.SE.mp3</h4>
              <div class="price">$5</div>
              <div class="author">Adam Beyer</div>
              <div class="album-year"><span>Dubstep</span> / 2014-08-05
              </div>
            </div>
          </div>
          <div class="player-seek">
            <div class="jp-progress">
              <div class="jp-proress">
                <div class="jp-seek-bar progress" style="width: 100%;">
                  <div class="jp-play-bar bg-info"></div>
                  <div class="jp-title text-lt"
                       style="display: none;">Bubble
                  </div>
                </div>
              </div>
            </div>

            <div class="jp-time-holder">
              <div class="time">
                <div class="jp-current-time"></div>
                /
                <div class="jp-duration"></div>
              </div>
            </div>
          </div>
          <div class="player-options">
            <div class="playlist"><a data-toggle="modal" href='#playlist'><i
                  class="fa fa-shopping-cart"></i><span
                  class="cart-number">3</span></a></div>
            <ul class="jp-contrls list-unstyled">
              <li class="mute-toggle"><a href="javascript:;"
                                         class="jp-mute" tabindex="1"
                                         title="mute"><i
                    class="fa fa-volume-up"></i></a></li>
              <li class="mute-toggle"><a href="javascript:;"
                                         class="jp-unmute" tabindex="1"
                                         title="unmute"><i
                    class="fa fa-volume-off"></i></a></li>
            </ul>

          </div>
          <div class="buy-buttons  hidden-xs hidden-sm">
            <a href="#" data-id="1"
               class="btn btn-primary btn-block btn-buy">Buy now</a>
            <a href="author_profile.html"
               class="btn btn-primary btn-block btn-details">details</a>
          </div>
        </div>
      </div>
    </div>
  </div>
  <!-- End - jPlayer -->

  <?php if (isset($content['field_audio_view'])): ?>
    <!-- Begin - audio playlist -->
    <div class="os2-paragraphs-item-content-audio-playlist-view">
      <?php print render($content['field_audio_view']); ?>
    </div>
    <!-- End - audio playlist -->
  <?php endif; ?>

</div>
<!-- End - paragraphs item -->
<?php endif; ?>
