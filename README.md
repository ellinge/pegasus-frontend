![screenshot](etc/promo/screenshot_alpha1.jpg)


# Pegasus Frontend

Pegasus is a graphical frontend for browsing your game library and launching all kinds of emulators from the same place. It's focusing on customizability, cross platform support (including embedded) and high performance.

[![Linux (X11/RPi1/RPi2) build status](https://travis-ci.org/mmatyas/pegasus-frontend.svg?branch=master)](https://travis-ci.org/mmatyas/pegasus-frontend)
[![Windows build status](https://ci.appveyor.com/api/projects/status/github/mmatyas/pegasus-frontend?svg=true&branch=master)](https://ci.appveyor.com/project/mmatyas/pegasus-frontend)
[![Coverity Scan status](https://scan.coverity.com/projects/12638/badge.svg)](https://scan.coverity.com/projects/mmatyas-pegasus-frontend)
[![Codacy status](https://api.codacy.com/project/badge/Grade/716566e918a64b0fb20959c02779bbd2)](https://www.codacy.com/app/mmatyas/pegasus-frontend?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=mmatyas/pegasus-frontend&amp;utm_campaign=Badge_Grade)
[![GPLv3 license](https://img.shields.io/badge/license-GPLv3-blue.svg)](LICENSE.md)

- [Development thread](https://retropie.org.uk/forum/topic/9598/announcing-pegasus-frontend)
- [Latest automatic builds][gh ci builds]
  - Debian/Ubuntu repository: [see below](#installation)
- [Main website](http://pegasus-frontend.org)


## Features

**Open source and cross platform:** runs on Linux, Windows, Mac, all Raspberries, Odroids and possibly on other devices. Hardware accelerated and works with or without X11. It may even run on phones and tablets too.

**Full control over the UI:** you can completely change everything that is on the screen, add or remove UI elements, menu screens, whatever. Want to make it look like Kodi? Steam? Any other launcher? No problem. You can even [run your custom shader code](etc/promo/shader_demo.jpg).

**ES2 backward compatibility:** Pegasus can use EmulationStation's gamelist files, no need to invent a new set of tools.

**Features you'd expect:** Gamepad support and config. Multiple aspect ratio support. Portable mode support. Live theme reload. Visible system informations. A clock in the corner.


## Installation

At the moment, this project is still in alpha. You can find the current unstable releases and the latest automatic builds [here][gh ci builds]. You can also build the program manually from its source code.

**Debian/Ubuntu:** for 64-bit desktops, the latest version can be installed like this:

```sh
# Add the repository
curl https://bintray.com/user/downloadSubjectPublicKey?username=bintray | sudo apt-key add -
sudo add-apt-repository 'deb https://dl.bintray.com/mmatyas/deb testing main'

# Update and install
sudo apt update
sudo apt install pegasus-frontend
```

### Runtime dependencies

While the releases try to include most required dependencies, on some platforms you might need to install additional packages.

- Linux: a distro not older than Ubuntu 14.04 or Debian Wheezy is recommended. The dependencies are Fontconfig and GStreamer 1.x (`fontconfig gstreamer1.0-alsa gstreamer1.0-libav gstreamer1.0-plugins-good`).
- Windows: all dependencies included, should work on anything between Windows 7 and 10.


## Building from source

**Build dependencies**

- C++11 compatible compiler
- Qt 5.7 or later (5.9 recommended), with the following modules:
    - QML and QtQuick2
    - Multimedia
    - SVG
    - Gamepad

For more information, please see the detailed [build guide](http://pegasus-frontend.org/docs/dev/build).

**Downloading the source**

The project uses Git submodules. If you cloned the repository recursively, they are automatically cloned as well. If you did not, you can do it manually like this:

```sh
# call this after every repo update
git submodule update --init
```

**Building**

You can use any Qt-compatible IDEs, eg. Qt Creator to build the project, or you can manually invoke

```sh
mkdir build && cd build
qmake ..  # qmake [params] [project path], see below
make
make install  # optional
```

**QMake parameters**

Additional parameters are available for QMake:

- `INSTALLDIR`: where to `make install` the program. Defaults to `/opt/pegasus-frontend` or `C:\pegasus-frontend`.

**For more details**, see the [wiki page](http://pegasus-frontend.org/docs/dev/build).


## License

Pegasus Frontend is available under GPLv3 license. Some included assets, such as product logos and symbols may not be available for commercial usage and/or may require additional permissions from their respective owners for certain legal uses. Furthermore, trademark usage may be limited as per §7 of the GPLv3 license. You can find the details in the [LICENSE](LICENSE.md) file.

All trademarks, service marks, trade names, trade dress, product names and logos are property of their respective owners. All company, product and service names used in this product are for identification purposes only. Use of these names, logos, and brands does not imply endorsement.


## Donate

Pegasus is a free and open source project, and will remain as one. If you would like to provide financial support, you can use the following links. This is completely optional, but every contribution is much appreciated!

[![PayPal](https://www.paypalobjects.com/webstatic/en_US/i/buttons/PP_logo_h_100x26.png)](https://paypal.me/MatyasMustoha)
[![Liberapay](https://liberapay.com/assets/widgets/donate.svg)](https://liberapay.com/mmatyas/donate)



[gh ci builds]: https://github.com/mmatyas/pegasus-frontend/releases/tag/continuous
