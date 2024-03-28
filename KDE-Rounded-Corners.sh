#!/bin/bash

sudo pacman -S git cmake extra-cmake-modules base-devel --noconfirm
yay -S qt5-tools

git clone https://github.com/matinlotfali/KDE-Rounded-Corners
cd KDE-Rounded-Corners
mkdir build
cd build
cmake .. --install-prefix /usr
make
sudo make install
sh ../tools/load.sh
