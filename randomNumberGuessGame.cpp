#include <iostream>
#include<cstdlib>
#include <conio.h>
using namespace std;
int main(){
	cout << "\t" << "--------------------------------------------------The Random Number Game---------------------------------------------" << endl;
	cout << "Type the Random Number(100-110): " << endl;
	int gameNumber;
	srand(109);
	int saveRandomNumber  = rand() % (110-100) + 100;
	int gameLoop = 0;
	do{
		if(gameNumber == saveRandomNumber){
			cout << "Congratulations!! You Won";
			break;
//			return 0;
		}
		else if(gameNumber != saveRandomNumber){
				cout << "Enter the number again :";
				cin >> gameNumber;
		}
		else{
			cout << "You Lost (The Expected Number was "<< saveRandomNumber;
		}
		gameLoop++;
	}
	while(gameLoop < 5);
	return 0;
}














