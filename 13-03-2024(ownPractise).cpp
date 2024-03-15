#include <iostream>
#include <windows.h>
using namespace std;
int main(){	
	string userName;
	int i = 0;
	while(userName != "N" || userName != "n"){
		cout << "Enter Your Name: ";
		cin >> userName;
		
		cout << i + 1 << ": ";
		cout << userName << endl;
	}
}
