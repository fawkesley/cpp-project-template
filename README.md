# C++ Project Template

## Build dependencies

- CMake - cmake
- CMake configure (optional) - cmake-curses-gui
- Apache log4cxx development headers - liblog4cxx10-dev

## Runtime dependencies

- Apache log4cxx library - liblog4cxx10

## Quickstart

To build and run, type the following:
    
    $ mkdir build
    $ cd build
    $ ccmake ../src # set the release type, defaults to 'RelWithDebInfo'
    $ cmake ../src
    $ make
    $ cd build/bin/RelWithDebInfo
    $ ln -s ../../../src/log4cxx.properties ./ # symlink in the logger config
