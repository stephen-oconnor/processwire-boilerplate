# ProcessWire Boilerplate

This is a boilerplate for my standard build with ProcessWire. Only for me, but feel free to use it if you like. Uses the following technologies:
- ProcessWire
- HTML
- CSS
- Sass
- Bourbon
- Susy
- JavaScript
- jQuery
- gulp
- PHP
- Git


## Follow these instructions to install ProcessWire

- Download ProcessWire 
  - Download from website https://processwire.com/download
  - Clone GitHub repo https://github.com/ryancramerdesign/ProcessWire.git
- Create a database
- Open the installation file (root directory of project) in the browser
- Chose the 'Blank' template
- Add database credentials
- Set host names (config.php) if on production server
- Create admin account, remember username, password and control panel admin link
- Install modules
  - BodyClass
  - CroppableImage
  - FormBuilder (paid)
  - SEO
  - MarkupSimpleNavigation
  - Markup SitemapXML


## Template Structure

- Templates are located and stored in the site > templates folder
- Copy 'src' folder into site > templates
- Install node, npm and gulp globally (if not installed already)
- Run 'npm install' to install project dependencies
- Add settings to .gitignore to ignore files and folders you don't want to track
- Templates are broken down into partials in partials > template-partials (.inc)
- Header and Footer are already coded, alter to suit


## CSS and Sass Setup

- Folder structure is setup for sass (scss) using SMACSS with an '_index.scss' file importing all other scss files
- 'base' folder contains some helpers to get you started
- 3rd Party folder used for 3rd party css and libraries such as Bourbon and Susy


## Build Process

- gulp build tasks can be found in gulpfile.js
