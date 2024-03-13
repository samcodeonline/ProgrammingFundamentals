#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	cout << "Press Enter";
	
//	cin >> enterKey;
	string name = "sarimNadeem";
	if(GetKeyState(VK_RETURN) & 0x0D)/*Check if high-order bit is set (1 << 15)*/
	{
	    cout << name;
	     
	}else{
		cout << "you are not human";
	}
}
