<div id="page" class="<?php print $classes; ?>"<?php print $attributes; ?>>

  <!-- ______________________ HEADER _______________________ -->

  <header id="header">
  
    <div id="navtop">
      <div id="menu-top">
        <?php print drupal_render(menu_tree('menu-top-menu')); ?>
      </div>
      <div id="donatenow">
        <a title="Donate Now" href="http://www.canadahelps.org/CharityProfilePage.aspx?charityID=s41272" alt="Donate"></a>
      </div>
      <?php if ($cwp_search_form): ?>
      <div id="search">
        <?php print $cwp_search_form; ?>
      </div>
      <?php endif; ?>
    </div>

    <?php if ($logo): ?>
    <div id="branding">
      <a href="http://www.cwp-csp.ca" title="<?php print t('Home'); ?>" rel="home" id="logo">
        <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>"/>
      </a>
    </div>
    <?php endif; ?>

    <div id="navbarsub">
      <nav id="navigation" class="menu">
        <?php print theme('nice_menus_main_menu', array('direction' => 'down', 'depth' => '-1')); ?>
      </nav> <!-- /navigation -->
      <?php if ($page['navbarright']): ?>
        <div id="navbarright">
          <?php print render($page['navbarright']); ?>
        </div>
      <?php endif; ?>
    </div>

    <?php if ($page['header']): ?>
      <div id="header-region">
        <?php print render($page['header']); ?>
      </div>
    <?php endif; ?>

  </header> <!-- /header -->

  <!-- ______________________ MAIN _______________________ -->

  <div id="main" class="clearfix">

    <section id="content">

        <?php if ($breadcrumb || $title|| $messages || $tabs || $action_links): ?>
          <div id="content-header">

            <?php //print $breadcrumb; ?>

            <?php if ($page['highlighted']): ?>
              <div id="highlighted"><?php print render($page['highlighted']) ?></div>
            <?php endif; ?>

            <?php print render($title_prefix); ?>

            <?php if ($title): ?>
              <h1 class="title"><?php print $title; ?></h1>
            <?php endif; ?>

            <?php print render($title_suffix); ?>
            <?php print $messages; ?>
            <?php print render($page['help']); ?>

            <?php if ($tabs): ?>
              <div class="tabs"><?php print render($tabs); ?></div>
            <?php endif; ?>

            <?php if ($action_links): ?>
              <ul class="action-links"><?php print render($action_links); ?></ul>
            <?php endif; ?>

          </div> <!-- /#content-header -->
        <?php endif; ?>

        <div id="content-area">
          <?php print render($page['content']) ?>
        </div>

        <?php print $feed_icons; ?>

    </section> <!-- /content-inner /content -->

    <?php if ($page['sidebar_first']): ?>
      <aside id="sidebar-first" class="column sidebar first">
        <?php print render($page['sidebar_first']); ?>
      </aside>
    <?php endif; ?> <!-- /sidebar-first -->
    
    <?php if ($page['sidebar_second']): ?>
      <aside id="sidebar-second" class="column sidebar second">
        <?php print render($page['sidebar_second']); ?>
      </aside>
    <?php endif; ?> <!-- /sidebar-second -->

  </div> <!-- /main -->

  <!-- ______________________ FOOTER _______________________ -->

  <?php if ($page['footer']): ?>
    <footer id="footer">
      <?php print render($page['footer']); ?>
    </footer> <!-- /footer -->
  <?php endif; ?>

</div> <!-- /page -->

<div id="closing">

  <div id="social-media">
    <strong>Follow Us: </strong>
    <a id="twitter" target="_blank" href="http://twitter.com/CWP_CSP">
      <img src="<?php print url(drupal_get_path('theme', 'sunrise') . '/images/twitter.png'); ?>" alt="twitter" title="Twitter"/>
    </a>
    <a id="facebook" target="_blank" href="http://www.facebook.com/pages/Canada-Without-Poverty/106633876058589">
      <img src="<?php print url(drupal_get_path('theme', 'sunrise') . '/images/facebook.png'); ?>" alt="facebook" title="Facebook"/>
    </a>
  </div>

  <div id="site-info">Copyright © <?php print date('Y'); ?> Canada Without Poverty -
    <a rel="home" title="Canada Without Poverty" href="http://www.cwp-csp.ca/">Home</a>
    - <a title="Contact Us" href="http://www.cwp-csp.ca/NEW_mainBlog/?page_id=12">Contact Us</a>
    <br />
    Charitable Number: #130916638RR001
  </div>

</div> <!-- /closing -->
