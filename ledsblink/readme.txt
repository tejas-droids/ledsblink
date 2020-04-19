This is an example C++ library for Arduino 
Installation
--------------------------------------------------------------------------------

To install this library, just place this entire folder as a subfolder in your
Arduino/lib/targets/libraries folder.

When installed, this library should look like:

Arduino/lib/targets/libraries/ledlib              (this library's folder)
Arduino/lib/targets/libraries/ledlib/ledsblink.cpp     (the library implementation file)
Arduino/lib/targets/libraries/ledlib/ledsblink.h       (the library description file)
Arduino/lib/targets/libraries/ledlib/keywords.txt (the syntax coloring file)
Arduino/lib/targets/libraries/ledlib/examples     (the examples in the "open" menu)
Arduino/lib/targets/libraries/ledlib/readme.txt   (this file)

Building
--------------------------------------------------------------------------------

After this library is installed, you just have to start the Arduino application.
You may see a few warning messages as it's built.

To use this library in a sketch, go to the Sketch | Import Library menu and
selectledsblink.  This will add a corresponding line to the top of your sketch:
#include <ledsblink.h>

To stop using this library, delete that line from your sketch.

Geeky information:
After a successful build of this library, a new file named "ledsblink.o" will appear
in "Arduino/lib/targets/libraries/ledsblink". This file is the built/compiled library
code.

If you choose to modify the code for this library (i.e. "ledsblink.cpp" or "ledsblink.h"),
then you must first 'unbuild' this library by deleting the "Test.o" file. The
new "ledsblink.o" with your code will appear after the next press of "verify"

