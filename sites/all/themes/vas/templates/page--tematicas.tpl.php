<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 */
?>
<?php if ($page['utility_bar']): ?>
  <div class="utility-bar">
    <?php print render($page['utility_bar']); ?>
  </div><!-- end utility bar -->
<?php endif; ?>
<header class="header" role="banner">
  <div class="grid">

  <!-- Firma UCR -->
  <a id="firma-ucr" href="http://www.ucr.ac.cr/"><img src="<?php print $base_path . $directory . '/images/firma-ucr.png' ?>" alt="Universidad de Costa Rica" /></a>

  <?php if ($logo): ?>
    <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
      <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
    </a>
  <?php endif; ?>

  <?php if ($site_name || $site_slogan): ?>

      <?php if ($site_name): ?>
        <?php if ($title): ?>

        <div id="site-name">
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
        </div>

        <?php else: /* Use h1 when the content title is empty */ ?>
          <h1 id="site-name">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
          </h1>
        <?php endif; ?>
      <?php endif; ?>

      <?php if ($site_slogan): ?>
        <?php print $site_slogan; ?>
      <?php endif; ?>

  <?php endif; ?>

  <?php print render($page['header']); ?>
</div>
</header>

<nav id="areas-vas">
<?php print theme('links__system_main_menu', array('links' => $main_menu, 'attributes' => array('id' => 'main-menu', 'class' => array('links', 'inline', 'clearfix')), 'heading' => t('Main menu'))); ?>
</nav>

<?php if ($messages): ?>
<div class="messages-wrapper">
  <div class="messages-content">
    <?php print $messages; ?>
  </div>
</div>
<?php endif; ?>

<?php if ($page['above_content']): ?>
  <section class="above-content">
    <?php print render($page['above_content']); ?>
  </section>
<?php endif; // end Above Content ?>

<div class="main-content">
  <?php if ($page['highlighted']): ?>
    <?php print render($page['highlighted']); ?>
  <?php endif; ?>

    <a id="main-content"></a>
    <div class="main-wrapper">

    <?php print render($title_prefix); ?>
    <?php if ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
    <?php print render($title_suffix); ?>
    
    <div class="help">
      <?php print render($page['help']); ?>
    </div>
    <div class="main" role="main">

      <?php if ($breadcrumb): ?>
        <?php print $breadcrumb; ?>
      <?php endif; ?>

      <?php if ($tabs): ?>
        <?php print render($tabs); ?>

      <?php endif; ?>

      <?php if ($action_links): ?>
        <ul class="action-links">
          <?php print render($action_links); ?>
        </ul>
      <?php endif; ?>

      <?php print render($page['content']); ?>

      <?php if ($page['below_content']): ?>
        <section class="below-content">
          <?php print render($page['below_content']); ?>
        </section>
      <?php endif; // end Below Content ?>

    </div></div>

<!--  
  <?php if ($page['sidebar_first']): ?>
    <div id="sidebar-first" class="">
      <?php print render($page['sidebar_first']); ?>
    </div> <!-- /.section, /#sidebar-first -->
  <?php endif; ?>

  <?php if ($page['sidebar_second']): ?>
    <div id="sidebar-second" class="">
      <?php print render($page['sidebar_second']); ?>
    </div> <!-- /.section, /#sidebar-second -->
  <?php endif; ?>
</div>
-->
<footer class="footer" role="contentinfo">
  <div class="">
    <?php print render($page['footer']); ?>
  </div>
</footer>

<?php if ($page['closure']): ?>
<aside class="closure">
  <?php print render($page['closure']); ?>
</aside>
<?php endif; // end closure ?>



