// Document ready
(function ($) {
    'use strict';

    // Enable BS3 designer
    bs3Designer.init();

    // Enable BS3 sidebar
    bs3Sidebar.init();

    // Scroll to top
    $('.scroll-to-top').on('click touchstart', function (event) {
        event.preventDefault;
        $('html, body').animate({scrollTop: 0}, 1000);

        return false;
    });
})(jQuery);
