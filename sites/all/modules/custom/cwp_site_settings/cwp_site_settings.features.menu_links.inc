<?php
/**
 * @file
 * cwp_site_settings.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function cwp_site_settings_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_a-human-rights-violation:http://www.cwp-csp.ca/poverty/a-human-rights-violation/
  $menu_links['main-menu_a-human-rights-violation:http://www.cwp-csp.ca/poverty/a-human-rights-violation/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.cwp-csp.ca/poverty/a-human-rights-violation/',
    'router_path' => '',
    'link_title' => 'A Human Rights Violation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_a-human-rights-violation:http://www.cwp-csp.ca/poverty/a-human-rights-violation/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_poverty:http://www.cwp-csp.ca/poverty/',
  );
  // Exported menu link: main-menu_action:http://www.cwp-csp.ca/action
  $menu_links['main-menu_action:http://www.cwp-csp.ca/action'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.cwp-csp.ca/action',
    'router_path' => '',
    'link_title' => 'Action',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_action:http://www.cwp-csp.ca/action',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 0,
  );
  // Exported menu link: main-menu_collaborative-research:http://www.cwp-csp.ca/action/collaborative-research/
  $menu_links['main-menu_collaborative-research:http://www.cwp-csp.ca/action/collaborative-research/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.cwp-csp.ca/action/collaborative-research/',
    'router_path' => '',
    'link_title' => 'Collaborative Research',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_collaborative-research:http://www.cwp-csp.ca/action/collaborative-research/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
    'parent_identifier' => 'main-menu_action:http://www.cwp-csp.ca/action',
  );
  // Exported menu link: main-menu_dignity-for-all:http://www.cwp-csp.ca/action/dignityforall/
  $menu_links['main-menu_dignity-for-all:http://www.cwp-csp.ca/action/dignityforall/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.cwp-csp.ca/action/dignityforall/',
    'router_path' => '',
    'link_title' => 'Dignity for All',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_dignity-for-all:http://www.cwp-csp.ca/action/dignityforall/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
    'parent_identifier' => 'main-menu_action:http://www.cwp-csp.ca/action',
  );
  // Exported menu link: main-menu_donate:http://www.cwp-csp.ca/get-involved/donate/
  $menu_links['main-menu_donate:http://www.cwp-csp.ca/get-involved/donate/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.cwp-csp.ca/get-involved/donate/',
    'router_path' => '',
    'link_title' => 'Donate',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_donate:http://www.cwp-csp.ca/get-involved/donate/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
    'parent_identifier' => 'main-menu_get-involved:http://www.cwp-csp.ca/get-involved/',
  );
  // Exported menu link: main-menu_economic-and-social-rights:http://www.cwp-csp.ca/poverty/a-human-rights-violation/economic-and-social-rights-2/
  $menu_links['main-menu_economic-and-social-rights:http://www.cwp-csp.ca/poverty/a-human-rights-violation/economic-and-social-rights-2/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.cwp-csp.ca/poverty/a-human-rights-violation/economic-and-social-rights-2/',
    'router_path' => '',
    'link_title' => 'Economic and Social Rights',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_economic-and-social-rights:http://www.cwp-csp.ca/poverty/a-human-rights-violation/economic-and-social-rights-2/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
    'parent_identifier' => 'main-menu_a-human-rights-violation:http://www.cwp-csp.ca/poverty/a-human-rights-violation/',
  );
  // Exported menu link: main-menu_ethno-cultural-project:http://www.cwp-csp.ca/action/ethnoculturalproject/
  $menu_links['main-menu_ethno-cultural-project:http://www.cwp-csp.ca/action/ethnoculturalproject/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.cwp-csp.ca/action/ethnoculturalproject/',
    'router_path' => '',
    'link_title' => 'Ethno-Cultural Project',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_ethno-cultural-project:http://www.cwp-csp.ca/action/ethnoculturalproject/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
    'parent_identifier' => 'main-menu_action:http://www.cwp-csp.ca/action',
  );
  // Exported menu link: main-menu_events:http://www.cwp-csp.ca/get-involved/events/
  $menu_links['main-menu_events:http://www.cwp-csp.ca/get-involved/events/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.cwp-csp.ca/get-involved/events/',
    'router_path' => '',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_events:http://www.cwp-csp.ca/get-involved/events/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
    'parent_identifier' => 'main-menu_get-involved:http://www.cwp-csp.ca/get-involved/',
  );
  // Exported menu link: main-menu_get-involved:http://www.cwp-csp.ca/get-involved/
  $menu_links['main-menu_get-involved:http://www.cwp-csp.ca/get-involved/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.cwp-csp.ca/get-involved/',
    'router_path' => '',
    'link_title' => 'Get Involved',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_get-involved:http://www.cwp-csp.ca/get-involved/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
  );
  // Exported menu link: main-menu_human-rights-and-international-law:http://www.cwp-csp.ca/human-rights-and-international-law/
  $menu_links['main-menu_human-rights-and-international-law:http://www.cwp-csp.ca/human-rights-and-international-law/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.cwp-csp.ca/human-rights-and-international-law/',
    'router_path' => '',
    'link_title' => 'Human Rights and International Law',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_human-rights-and-international-law:http://www.cwp-csp.ca/human-rights-and-international-law/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
    'parent_identifier' => 'main-menu_a-human-rights-violation:http://www.cwp-csp.ca/poverty/a-human-rights-violation/',
  );
  // Exported menu link: main-menu_just-the-facts:http://www.cwp-csp.ca/poverty/just-the-facts/
  $menu_links['main-menu_just-the-facts:http://www.cwp-csp.ca/poverty/just-the-facts/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.cwp-csp.ca/poverty/just-the-facts/',
    'router_path' => '',
    'link_title' => 'Just the Facts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_just-the-facts:http://www.cwp-csp.ca/poverty/just-the-facts/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_poverty:http://www.cwp-csp.ca/poverty/',
  );
  // Exported menu link: main-menu_poverty-and-human-rights:http://www.cwp-csp.ca/action/poverty-and-human-rights/
  $menu_links['main-menu_poverty-and-human-rights:http://www.cwp-csp.ca/action/poverty-and-human-rights/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.cwp-csp.ca/action/poverty-and-human-rights/',
    'router_path' => '',
    'link_title' => 'Poverty and Human Rights',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_poverty-and-human-rights:http://www.cwp-csp.ca/action/poverty-and-human-rights/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
    'parent_identifier' => 'main-menu_action:http://www.cwp-csp.ca/action',
  );
  // Exported menu link: main-menu_poverty-and-punchlines:http://www.cwp-csp.ca/action/poverty-and-punchlines/
  $menu_links['main-menu_poverty-and-punchlines:http://www.cwp-csp.ca/action/poverty-and-punchlines/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.cwp-csp.ca/action/poverty-and-punchlines/',
    'router_path' => '',
    'link_title' => 'Poverty and Punchlines',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_poverty-and-punchlines:http://www.cwp-csp.ca/action/poverty-and-punchlines/',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_action:http://www.cwp-csp.ca/action',
  );
  // Exported menu link: main-menu_poverty-progress-profiles:http://www.cwp-csp.ca/poverty/poverty-progress-profiles/
  $menu_links['main-menu_poverty-progress-profiles:http://www.cwp-csp.ca/poverty/poverty-progress-profiles/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.cwp-csp.ca/poverty/poverty-progress-profiles/',
    'router_path' => '',
    'link_title' => 'Poverty Progress Profiles',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_poverty-progress-profiles:http://www.cwp-csp.ca/poverty/poverty-progress-profiles/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_poverty:http://www.cwp-csp.ca/poverty/',
  );
  // Exported menu link: main-menu_poverty:http://www.cwp-csp.ca/poverty/
  $menu_links['main-menu_poverty:http://www.cwp-csp.ca/poverty/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.cwp-csp.ca/poverty/',
    'router_path' => '',
    'link_title' => 'Poverty',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_poverty:http://www.cwp-csp.ca/poverty/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: main-menu_resources:resources
  $menu_links['main-menu_resources:resources'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources',
    'router_path' => 'resources',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_resources:resources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 0,
  );
  // Exported menu link: main-menu_social-media:http://www.cwp-csp.ca/get-involved/social-media/
  $menu_links['main-menu_social-media:http://www.cwp-csp.ca/get-involved/social-media/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.cwp-csp.ca/get-involved/social-media/',
    'router_path' => '',
    'link_title' => 'Social Media',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_social-media:http://www.cwp-csp.ca/get-involved/social-media/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
    'parent_identifier' => 'main-menu_get-involved:http://www.cwp-csp.ca/get-involved/',
  );
  // Exported menu link: main-menu_support-dignity-for-all:http://www.cwp-csp.ca/get-involved/support-dignity-for-all/
  $menu_links['main-menu_support-dignity-for-all:http://www.cwp-csp.ca/get-involved/support-dignity-for-all/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.cwp-csp.ca/get-involved/support-dignity-for-all/',
    'router_path' => '',
    'link_title' => 'Support Dignity for All',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_support-dignity-for-all:http://www.cwp-csp.ca/get-involved/support-dignity-for-all/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
    'parent_identifier' => 'main-menu_get-involved:http://www.cwp-csp.ca/get-involved/',
  );
  // Exported menu link: main-menu_the-cost-of-poverty:http://www.cwp-csp.ca/poverty/the-cost-of-poverty/
  $menu_links['main-menu_the-cost-of-poverty:http://www.cwp-csp.ca/poverty/the-cost-of-poverty/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.cwp-csp.ca/poverty/the-cost-of-poverty/',
    'router_path' => '',
    'link_title' => 'The Cost of Poverty',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_the-cost-of-poverty:http://www.cwp-csp.ca/poverty/the-cost-of-poverty/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_poverty:http://www.cwp-csp.ca/poverty/',
  );
  // Exported menu link: menu-top-menu_about:http://www.cwp-csp.ca/about-us/
  $menu_links['menu-top-menu_about:http://www.cwp-csp.ca/about-us/'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'http://www.cwp-csp.ca/about-us/',
    'router_path' => '',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-menu_about:http://www.cwp-csp.ca/about-us/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
  );
  // Exported menu link: menu-top-menu_contact:http://www.cwp-csp.ca/contact/
  $menu_links['menu-top-menu_contact:http://www.cwp-csp.ca/contact/'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'http://www.cwp-csp.ca/contact/',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-menu_contact:http://www.cwp-csp.ca/contact/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 0,
  );
  // Exported menu link: menu-top-menu_cwp-advocacy-network:http://www.cwp-csp.ca/cwp-advocacy-network/
  $menu_links['menu-top-menu_cwp-advocacy-network:http://www.cwp-csp.ca/cwp-advocacy-network/'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'http://www.cwp-csp.ca/cwp-advocacy-network/',
    'router_path' => '',
    'link_title' => 'CWP Advocacy Network',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-menu_cwp-advocacy-network:http://www.cwp-csp.ca/cwp-advocacy-network/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 0,
  );
  // Exported menu link: menu-top-menu_dignity-for-all:http://www.cwp-csp.ca/dignity-for-all/
  $menu_links['menu-top-menu_dignity-for-all:http://www.cwp-csp.ca/dignity-for-all/'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'http://www.cwp-csp.ca/dignity-for-all/',
    'router_path' => '',
    'link_title' => 'Dignity for All',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-menu_dignity-for-all:http://www.cwp-csp.ca/dignity-for-all/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 0,
  );
  // Exported menu link: menu-top-menu_home:<front>
  $menu_links['menu-top-menu_home:<front>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: menu-top-menu_media:http://www.cwp-csp.ca/media/
  $menu_links['menu-top-menu_media:http://www.cwp-csp.ca/media/'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'http://www.cwp-csp.ca/media/',
    'router_path' => '',
    'link_title' => 'Media',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-menu_media:http://www.cwp-csp.ca/media/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
  );
  // Exported menu link: menu-top-menu_news:http://www.cwp-csp.ca/news/
  $menu_links['menu-top-menu_news:http://www.cwp-csp.ca/news/'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'http://www.cwp-csp.ca/news/',
    'router_path' => '',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-menu_news:http://www.cwp-csp.ca/news/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('A Human Rights Violation');
  t('About');
  t('Action');
  t('CWP Advocacy Network');
  t('Collaborative Research');
  t('Contact');
  t('Dignity for All');
  t('Donate');
  t('Economic and Social Rights');
  t('Ethno-Cultural Project');
  t('Events');
  t('Get Involved');
  t('Home');
  t('Human Rights and International Law');
  t('Just the Facts');
  t('Media');
  t('News');
  t('Poverty');
  t('Poverty Progress Profiles');
  t('Poverty and Human Rights');
  t('Poverty and Punchlines');
  t('Resources');
  t('Social Media');
  t('Support Dignity for All');
  t('The Cost of Poverty');


  return $menu_links;
}
