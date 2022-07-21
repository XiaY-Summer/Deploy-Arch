#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
int main(){
	system("sudo pacman -S chrome-gnome-shell");
	system("yay -S xfce-theme-greybird");
	system("unzip GNOME-themes.zip");
	system("unzip mouse-icons.zip");
	system("unzip themes.zip");
	system("mkdir ~/.themes");
	system("sudo cp -r Sweet-cursors /usr/share/icons");
	system("cp -r .themes ~");
	system("cp -r extensions ~/.local/share/gnome-shell");

}
