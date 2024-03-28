#!/bin/bash

git clone https://github.com/catppuccin/fcitx5.git
mkdir -p ~/.local/share/fcitx5/themes/
cp -r ./fcitx5/src/* ~/.local/share/fcitx5/themes
sed -i 'Theme=catppuccin-macchiato' ~/.config/fcitx5/conf/classicui.conf
fcitx5 -r
