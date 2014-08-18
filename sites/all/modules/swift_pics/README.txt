-- SUMMARY --

The Swift Pics module makes adding large photo galleries very fast and easy. It
simply scans and imports the image files from a folder directory in
sites/default/files and automatically adds them to an image field to be used as
you wish.

I created this because I was simply tired of having to select/upload images one
at a time for photo galleries I create which can have hundreds of photos in
them. All that is required is that you have file server (FTP, SSH, etc.) access
to place the files in a folder in your sites/default/files directory.

The Swift Pics module adds a Swift Pics content type which has the ability to
scan a file directory in sites/default/files for any image types and adds them
all to an image field in the gallery node. The images are added as true Drupal
managed image/file types and to the multi-value Image field of the Swift Pics
node.

For a full description of the module, visit the project page:
http://drupal.org/project/swift_pics

To submit bug reports and feature suggestions, or to track changes:
http://drupal.org/project/issues/swift_pics


-- REQUIREMENTS --

None.


-- INSTALLATION --

* Install as usual, see:
http://drupal.org/documentation/install/modules-themes/modules-7

-- CONFIGURATION --

None.

-- WHAT DOES IT ADD --

  - Swift Pics content type: For adding photo galleries.
  - Default View
  ("Swift Pics"): For using a views-based display and gallery navigation.
  * Gallery detail node path:
    http://example.com/swift-pics/[nid]
  * Gallery listing path:
    http://example.com/swift-pics-list

-- BASIC INSTRUCTIONS --

  - Install the module

  - Add a folder and images to:
  your_site_root/sites/default/files.

  For example you can add some JPG images to a folder path you'll create at:
your_site_root/sites/default/files/galleries/cars

  - (The Rest is done through the Drupal UI)

  - Navigate to "Add content" and select "Swift Pics" or go directly to:
    http://example.com/node/add/swift-pics

  - Add a Title, Gallery Description (optional), and Image Directory/Folder 
  Path which should be "galleries/cars" or whatever path you chose to create 
  in the files directory.

  - Save the node. You can now view the node and you should see a gallery of
  images.

  - Format/Customize the display to your liking and you're done.

  - If you ever update the images in the folder and want to reset the image 
  field to these changes just edit the node and select the "Yes" checkbox to 
  reset the field to the image scan.

  * Be warned that this clears the image field of any custom node changes 
  like order or other field UI updates you might have done to the existing 
  images in that field.

-- CUSTOMIZATION --

* To override the default gallery display, you may:

  1) Modify settings of the Swift Pics content type itself including adding
  additional fields and changing display types. Other node changes are fine
  unless specified below.
  http://example.com/admin/structure/types/manage/swift_pics

    * This module expects the swift_pics_path, swift_pics_reset, and
    swift_pics_images fields to exist. Deleting and some settings of these
    fields has been disabled to prevent this. Altering field displays of these
    fields or adding additional fields is OK. It obviously expects the current
    content type maching name to exist as well (As a note to developers).


-- TROUBLESHOOTING --

* If you add a photo gallery and no images are populated in the image field of
* the node:

  Ensure you are using the correct folder path to your images. This module
  expects all image folder paths to be in your_site_root/sites/default/files.
  For example, if you are adding a gallery at
  your_site_root/sites/default/files/galleries/air_planes, the path when
  creating the gallery should be "galleries/air_planes" (without quotes).

  Ensure the images are in the root folder of the path you put in. For
  example, images in
  your_site_root/sites/default/files/galleries/air_planes/gliders will not be
  scanned if your image path is
  your_site_root/sites/default/files/galleries/air_planes. It only scans the
  current level and does not go deeper. If you desire this functionality it
  can be quickly changed in the code if you are a developer.

-- FAQ --

Q: Why should I use this module?

A: There is no module I have found that allows you to quickly add a photo
gallery. Most require you to add images one at a time or have a process where
you must batch upload which causes issues with page timeout on large galleries.
This is excellent if you are someone that finds yourself wanting to add many
images to a folder and create an image gallery with them without having to 
touch each image yourself.


Q: How do I get the images in place?

A: You must have FTP or some sort of file server access to the
your_site_root/sites/default/files folder. From there you can create your own
folder structure for each photo gallery you upload and transfer the files to
that gallery. You can also use Drupal contrib modules that allow you to access
this directory through an interface in your Drupal site. Most require a 
per-file upload process which defeats the purpose of this being fast.


Q: How do I customize the look of my galleries?

A: Each gallery is a normal drupal node. It can be themed in any way you'd like
as a result. This includes content type field display settings, views
integration, or custom template file overrides and css if you want to go more
advanced. There are also other modules that allow enhanced functionality and
image field display:
  Colorbox: http://drupal.org/project/colorbox
  Lightbox2: http://drupal.org/project/lightbox2

Q: What happens when I select the checkbox to reset the gallery's images?

A: A new folder scan is done for images at the given path and the scan result
will replace any images in the "Gallery Images" field with the results of that
image scan if image files are found. This means you will loose any direct
manipulation done to the "Gallery Images" field like ordering or 
adding/removing images manually through the core file field UI.


Q: Is this all it does?

A: This module was created with the goal of being a universal start to endless
results. I resisted making it too heavy where it looses that feature.

-- CONTACT --

Current maintainers: * Keenan Holloway (Forum One) -
http://drupal.org/user/1322066

This project has been sponsored by: * Forum One Communicate. Collaborate. 
Change the world. Visit http://forumone.com/ for more information.
