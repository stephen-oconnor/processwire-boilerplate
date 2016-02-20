'use strict';

// Require Gulp modules.
    var gulp = require('gulp'),
      uglify = require('gulp-uglify'),
      rename = require('gulp-rename'),
        sass = require('gulp-sass'),
  sourcemaps = require('gulp-sourcemaps'),
      useref = require('gulp-useref'),
      gulpif = require('gulp-if'),
        csso = require('gulp-csso'),
         del = require('del'),
    lazypipe = require('lazypipe');


// Folder options object.
var options = {
  src: 'src',
  dist: 'dist'
};


// Compile sass to css. Creates css folder along with application.css file and sourcemap.
gulp.task('compileSass', function() {
  return gulp.src(options.src + '/scss/application.scss')
    .pipe(sourcemaps.init())
    .pipe(sass())
    .pipe(sourcemaps.write('./'))
    .pipe(gulp.dest(options.src + '/css'));
});


// Watch sass files and directory for changes.
gulp.task('watchSass', function() {
  gulp.watch(options.src + '/scss/**/*.scss', ['compileSass']);
});


// Starts watchSass then compileSass when changes are made.
gulp.task('serve', ['watchSass']);


// Clean any previously created dist files.
gulp.task('clean', function() {
  del(['dist', '/css/application.css*', '/js/application.min.js*']);
});


// Rename and create css and js files on the fly in the header.inc and footer.inc files. Create css and js folders and files and associated sourcemaps.
gulp.task('html', ['compileSass'], function() {
  var assets = useref.assets({}, lazypipe().pipe(sourcemaps.init, { loadMaps: true }));
  gulp.src([options.src + '/partials/header.inc', options.src + '/partials/footer.inc'])
    .pipe(assets)
    .pipe(gulpif('*.js', uglify()))
    .pipe(gulpif('*.css', csso()))
    .pipe(assets.restore())
    .pipe(useref())
    .pipe(sourcemaps.write('./'))
    .pipe(gulp.dest(options.dist + '/partials'));
});


// Build site for production.
gulp.task("build", ['html'], function() {
  return gulp.src([options.src + '/assets/**', options.src + '/partials/template-partials/*.inc'], { base: options.src })
    .pipe(gulp.dest(options.dist));
});

// Default task.
gulp.task('default', ['clean'], function() {
  gulp.start('build');
});
