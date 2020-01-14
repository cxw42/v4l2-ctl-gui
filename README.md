# v4l2-ctl-gui
simple ncurse interface to v4l2-ctl. lets you choose the device. 
then the available video driver options are displayed and can be edited.

# Prerequisites

* A C++11 compiler
* Curses.  E.g., on Ubuntu: `sudo apt install -y libncurses-dev`

# Building

    git clone ...
    cd v4l2-ctl-gui
    mkdir build
    cd build
    cmake ..
    make -j8

This will leave the executable in `build/v4l2_ctl_gui`.
