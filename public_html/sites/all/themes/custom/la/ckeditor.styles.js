/*
 Copyright (c) 2003-2013, CKSource - Frederico Knabben. All rights reserved.
 For licensing, see LICENSE.html or http://ckeditor.com/license
 */

/*
 * This file is used/requested by the 'Styles' button.
 * The 'Styles' button is not enabled by default in DrupalFull and DrupalFiltered toolbars.
 */
if (typeof(CKEDITOR) !== 'undefined') {
    // config.stylesSet.push({ name : 'Nice Table', element : 'table', wrap:false, attributes : { 'class' : 'mt-nice-table', 'title' :'Nice Table' } });
    CKEDITOR.addStylesSet('drupal',
        [

            /* Typography */
            {
                name: 'Heading',
                element: 'h2',
                attributes: {'class': 'heading-h2'}
            },
            {
                name: 'Subheading',
                element: 'h4',
                attributes: {'class': 'heading-h4'}
            },
            {name: 'Lead', element: 'p', attributes: {'class': 'lead'}},
            {name: 'Afsnit', element: 'p', attributes: {}},

            /* Lists */
            {
                name: 'List',
                element: 'ul',
                attributes: {
                    'class': 'list-unstyled'
                }
            },
            {
                name: 'List - horizontal',
                element: 'ul',
                attributes: {
                    'class': 'list-inline'
                }
            }

        ]);
}
