#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
int main(){
	system("sudo sed -i '$a\\[archlinuxcn]' /etc/pacman.conf");
	system("sudo sed -i '$a\\SigLevel = Optional TrustedOnly' /etc/pacman.conf");
	system("sudo sed -i '$a\\Server = https://mirrors.ustc.edu.cn/archlinuxcn/$arch' /etc/pacman.conf");
	system("sudo pacman -Syyu --noconfirm");
	system("sudo pacman -Syy --noconfirm");
	system("sudo pacman -S archlinuxcn-keyring");

	system("sudo pacman -S fcitx5-im fcitx5-chinese-addons --noconfirm");
	system("sudo pacman -S git --noconfirm");
	system("git clone https://github.com/thep0y/fcitx5-themes.git");
	system("mkdir -p ~/.local/share/fcitx5/themes"); 
	system("cp ./fcitx5-themes/winter ~/.local/share/fcitx5/themes -r");
	ofstream fout("classicui.conf");
	fout<<"Vertical Candidate List=False"<<endl;
	fout<<"PerScreenDPI=True"<<endl;
	fout<<"Font=\"Smartisan Compact CNS 13\""<<endl;
	fout<<"Theme=winter";
	fout.close();
	system("mkdir -p ~/.config/fcitx5/conf");
	system("touch ~/.config/fcitx5/conf/classicui.conf");
	system("cp classicui.conf ~/.config/fcitx5/conf/classicui.conf");

	system("sudo pacman -S yay --noconfirm");
	system("sudo pacman -S firefox --noconfirm");
	system("yay -S fcitx5-pinyin-sougou");
}
