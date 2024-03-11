#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	
		string napStatement ;
		int   tirePercentage ;
		cout << "Reason to Take a Nap :";
 
		getline(cin, napStatement);
 
		cout << "Type amount of sleep Intensity (1-200) : ";
		 cin >> tirePercentage;
		if(tirePercentage  >= 100){
			cout << "Take a Nap";
		}
		else if(tirePercentage <= 80){
			cout << "Keep working";
		}
		else{
			cout << "Leave it man , take a nap";
		}
}
