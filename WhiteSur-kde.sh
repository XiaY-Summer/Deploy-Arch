#!/bin/bash

git clone https://github.com/vinceliuice/WhiteSur-kde.git
cd WhiteSur-kde
./install.sh --opaque
sudo pacman -S kvantum --noconfirm
