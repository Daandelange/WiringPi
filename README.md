
wiringPi Modification Readme
=====================
This repo is a fork from the original wiringPi v2.  
I couldn't find functional (mechanical) rotary encoder decoder compatible with WiringPi so I decided to write something for this purpose. To do this, I needed to pass a member function (from a `C++` class) to `wiringPiISR()` (which is coded in `C`).  
Therefore I added a `void* userdata` to the interrupt function so I can find back the instance of my class class from a static member function linkable in C.
[See this post on stackoverflow.com for more details](http://stackoverflow.com/questions/2517484/how-can-i-pass-a-c-member-function-to-a-c-api-as-a-parameter)

See `./examples/RotaryEncoder` for more details.

###caution
Not retrocompatible with previous versions. If you use `wiringPiISR()` you'll have to update your code.

Original wiringPi README
========================

Please note that the official way to get wiringPi is via git from
git.drogon.net and not GitHub.

ie.

  git clone git://git.drogon.net/wiringPi

The version of wiringPi held on GitHub by "Gadgetoid" is used to build the
wiringPython, Ruby, Perl, etc. wrappers for these other languages. This
version may lag the official Drogon release.  Pull requests may not be
accepted to Github....

Please see

  http://wiringpi.com/

for the official documentation, etc. and the best way to submit bug reports, etc.
is by sending an email to projects@drogon.net

Thanks!

  -Gordon
