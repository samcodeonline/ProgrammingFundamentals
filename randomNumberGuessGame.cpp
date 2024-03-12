#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    cout << "\t" << "--------------------------------------------------The Random Number Game---------------------------------------------" << endl;
    
    srand(time(0));
    
    int saveRandomNumber = rand() % (110-100) + 100;
	 
    int enterNumber = 0;
   	while(enterNumber < 5){
   		cout << "Enter the number here " << enterNumber + 1  << ": ";
   		cin >> enterNumber;
   		if(enterNumber == saveRandomNumber){
   			cout << "Congratulations!! You Win";
		   }else{
		   	cout << "The right number was this: " << saveRandomNumber ;
		   }
		   enterNumber++;
	   }
    
    return 0;
}

