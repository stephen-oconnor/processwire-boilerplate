<!doctype html>
<html class="no-js" lang="en">
	<head>
		<meta charset="utf-8">
		<meta http-equiv="x-ua-compatible" content="ie=edge">
		<meta name="viewport" content="width=device-width, initial-scale=1">

		<title>Page Title</title>

		<meta name="description" content="<?php if($page->seo_description) { echo $page->seo_description; } else { echo $pages->get("/settings/")->site_meta_description; } ?>">
		<meta name="image" content="<?php echo $pages->get("/settings/")->seo_image->httpUrl ?>">
		<meta name="canonical" content="<?php echo $page->httpUrl; ?>">
		<meta name="author" content="<?php echo $config->seo->author; ?>">
		<meta name="robots" content="<?php echo $config->seo->robots; ?>">
		<meta name="og:site_name" content="<?php echo $pages->get("/settings/")->site_title; ?>">
		<meta name="og:title" content="<?php if($page->seo_title) { echo $page->seo_title; } else { echo $page->title; } ?>">
		<meta name="og:url" content="<?php echo $page->httpUrl; ?>">
		<meta name="og:description" content="<?php if($page->seo_description) { echo $page->seo_description; } else { echo $pages->get("/settings/")->site_meta_description; } ?>">
		<meta name="og:type" content="website">
		<meta name="og:image" content="<?php echo $pages->get("/settings/")->seo_image->httpUrl; ?>">
		<meta name="twitter:card" content="summary">
		<meta name="twitter:site" content="<?php echo $pages->get("/settings/")->twitter_handle; ?>">
		<meta name="twitter:title" content="<?php if($page->seo_title) { echo $page->seo_title; } else { echo $page->title; } ?>">
		<meta name="twitter:url" content="<?php echo $page->httpUrl; ?>">
		<meta name="twitter:description" content="<?php if($page->seo_description) { echo $page->seo_description; } else { echo $pages->get("/settings/")->site_meta_description; } ?>">
		<meta name="twitter:image" content="<?php echo $pages->get("/settings/")->seo_image->httpUrl; ?>">

		<!-- Favicon and Apple Icons -->
		<link rel="shortcut icon" href="/favicon.ico" type="image/x-icon" />
		<link rel="apple-touch-icon" sizes="57x57" href="<?php echo $config->urls->root; ?>apple-touch-icon-57x57.png">
		<link rel="apple-touch-icon" sizes="60x60" href="<?php echo $config->urls->root; ?>apple-touch-icon-60x60.png">
		<link rel="apple-touch-icon" sizes="72x72" href="<?php echo $config->urls->root; ?>apple-touch-icon-72x72.png">
		<link rel="apple-touch-icon" sizes="76x76" href="<?php echo $config->urls->root; ?>apple-touch-icon-76x76.png">
		<link rel="apple-touch-icon" sizes="114x114" href="<?php echo $config->urls->root; ?>apple-touch-icon-114x114.png">
		<link rel="apple-touch-icon" sizes="120x120" href="<?php echo $config->urls->root; ?>apple-touch-icon-120x120.png">
		<link rel="apple-touch-icon" sizes="144x144" href="<?php echo $config->urls->root; ?>apple-touch-icon-144x144.png">
		<link rel="apple-touch-icon" sizes="152x152" href="<?php echo $config->urls->root; ?>apple-touch-icon-152x152.png">
		<link rel="apple-touch-icon" sizes="180x180" href="<?php echo $config->urls->root; ?>apple-touch-icon-180x180.png">
		<link rel="icon" type="image/png" href="<?php echo $config->urls->root; ?>favicon-16x16.png" sizes="16x16">
		<link rel="icon" type="image/png" href="<?php echo $config->urls->root; ?>favicon-32x32.png" sizes="32x32">
		<link rel="icon" type="image/png" href="<?php echo $config->urls->root; ?>favicon-96x96.png" sizes="96x96">
		<link rel="icon" type="image/png" href="<?php echo $config->urls->root; ?>android-chrome-192x192.png" sizes="192x192">
		<meta name="msapplication-square70x70logo" content="<?php echo $config->urls->root; ?>smalltile.png" />
		<meta name="msapplication-square150x150logo" content="<?php echo $config->urls->root; ?>mediumtile.png" />
		<meta name="msapplication-wide310x150logo" content="<?php echo $config->urls->root; ?>widetile.png" />
		<meta name="msapplication-square310x310logo" content="<?php echo $config->urls->root; ?>largetile.png" />

		<!-- Stylesheet -->
		<!-- build:css(src) ../css/application.min.css -->
		<link rel="stylesheet" href="css/application.css">
		<!-- endbuild -->

		<!-- Add Modernizr -->

		<!-- Add Google Analytics -->
	</head>

	<body class="<?php echo $modules->get("BodyClass")->bodyclass() ?>">
	<!--[if lt IE 8]>
		<p class="browserupgrade">You are using an <strong>outdated</strong> browser. Please <a href="http://browsehappy.com/">upgrade your browser</a> to improve your experience.</p>
	<![endif]-->