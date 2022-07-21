#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
int main(){
	cout<<"Please enter user name:";
	string username;
	cin>>username;
	system("chmod u-w /etc/sudoers");

	string sed = "sed -i '/root ALL=(ALL:ALL) ALL/a\\" + username + " ALL=(ALL)ALL'" + " /etc/sudoers";
	
	char* command = (char*)sed.c_str();

	cout<<command<<endl;
	system(command);

	system("chmod u+w /etc/sudoers");
	
	system("pacman -Sy wqy-bitmapfont --noconfirm");
	system("pacman -Sy wqy-microhei --noconfirm");
	system("pacman -Sy wqy-zenhei --noconfirm");

}
