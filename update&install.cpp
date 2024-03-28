sudo sed -i '$a\\[archlinuxcn]' /etc/pacman.conf
sudo sed -i '$a\\SigLevel = Optional TrustedOnly' /etc/pacman.conf
sudo sed -i '$a\\Server = https://mirrors.ustc.edu.cn/archlinuxcn/$arch' /etc/pacman.conf
sudo pacman -Syyu --noconfirm
sudo pacman-key --lsign-key "farseerfc@archlinux.org"
sudo pacman -S archlinuxcn-keyring --noconfirm
sudo pacman -S fcitx5-im fcitx5-chinese-addons --noconfirm
sudo pacman -S yay --noconfirm
