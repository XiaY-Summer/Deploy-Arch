#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
int main(){
	system("sudo pacman -S zsh zsh-autosuggestions zsh-syntax-highlighting zsh-completions --noconfirm");
	system("sudo pacman -S autojump --noconfirm");
	system("chsh -s /usr/bin/zsh");
	system("cp zshrc ~/.zshrc");
	system("sudo sed -i '$a\\source /usr/share/zsh/plugins/zsh-syntax-highlighting/zsh-syntax-highlighting.zsh' ~/.zshrc");	
	system("sudo sed -i '$a\\source /usr/share/zsh/plugins/zsh-autosuggestions/zsh-autosuggestions.zsh' ~/.zshrc");
	system("sudo sed -i '$a\\source /usr/share/autojump/autojump.zsh' ~/.zshrc");
	
	system("yay -S nerd-fonts-jetbrains-mono");
	system("git clone --depth=1 https://gitee.com/romkatv/powerlevel10k.git ~/powerlevel10k");
	system("echo 'source ~/powerlevel10k/powerlevel10k.zsh-theme' >>~/.zshrc");

}
