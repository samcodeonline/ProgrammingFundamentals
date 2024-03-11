#include <iostream>
#include<cstdlib>
#include <conio.h>
using namespace std;
int main(){
	cout << "\t" << "--------------------------------------------------The Random Number Game---------------------------------------------" << endl;
	cout << "Type the Random Number(100-110): " << endl;
	int gameNumber;
	srand(100);
	int saveGameNumber  = rand() % (110-100) + 100;
	cin >> gameNumber;
	for(int gameLoopOne = 0; gameLoopOne < 1; gameLoopOne++){
		if(gameNumber == saveGameNumber){
			cout << "Congratulations!!! You Won";
//			return 0;
		}
		else if(gameNumber != saveGameNumber){
			for(int gameLoopTwo = 0; gameLoopTwo < 4; gameLoopTwo++){
				cin >> gameNumber;
				if(gameNumber == saveGameNumber){
				cout << "Congratulations!!! You Won";
				return 0;
				}
			}
//			return 0;
		}
		else{
			cout << "You Lost";
		}	
//			return 0;
	}
	return 0;
}














