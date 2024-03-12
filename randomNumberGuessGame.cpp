#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    cout << "\t" << "--------------------------------------------------The Random Number Game---------------------------------------------" << endl;
    
    srand(time(0));
    int saveRandomNumber = rand() % (110-100) + 100;
	int gameNumber = 0;
    int loopNumber = 0;    
    do{
    	cout << "\n";
   		cout << "Turn " << loopNumber + 1 << ":" << endl;
   		cin >> gameNumber;
   		if(gameNumber == saveRandomNumber){
   			cout << "Congratulations!! You Win.";
   			break;
		   }
		   else{
		   loopNumber++;
		   }
	}
	while(loopNumber < 5);
	cout << "\n";
	if(loopNumber == 5){
		cout << "The Expected Number was: " << saveRandomNumber;
	}
    return 0;
}












