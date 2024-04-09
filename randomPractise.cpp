#include <iostream>
using namespace std;
int main(){
 	
 	int num;
 	cin >> num;
 	int c = 2 ;
 		if(num == 1){
 			cout << "The number is  prime";
		 }
 	while(c<num){
		 if(num%c==0){
		 	cout << "the number is not prime";
		 	break;
		 }
		 else{
		 	cout << "The number is  prime";
		 	break;
		 }
	 }
	
	return 0;
}
