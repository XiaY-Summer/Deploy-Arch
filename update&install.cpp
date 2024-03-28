#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
int main(){
	system("sudo sed -i '$a\\[archlinuxcn]' /etc/pacman.conf");
	system("sudo sed -i '$a\\SigLevel = Optional TrustedOnly' /etc/pacman.conf");
	system("sudo sed -i '$a\\Server = https://mirrors.ustc.edu.cn/archlinuxcn/$arch' /etc/pacman.conf");
	system("sudo pacman -Syyu --noconfirm");
	system("sudo pacman -S archlinuxcn-keyring");
	system("sudo pacman -S fcitx5-im fcitx5-chinese-addons --noconfirm");
	system("sudo pacman -S yay --noconfirm");

}
