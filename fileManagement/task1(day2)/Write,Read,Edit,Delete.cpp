#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
//using namespace cout;
int main(){
	cout << "\n";
	int i = 1; 
	
	while(i > 0){
		cout << "Input Data" << endl;
		string   firstName , userName , password;
		char character;
		ofstream userWriteFile("tableData.txt" , ios::app);
		cout << "Name: ";
		cin >> firstName;
		cout << "User-Name: ";
		cin >> userName;
		cout << "Password: ";
		cin >> password;
		
		userWriteFile << "\n";
		int n = 0;
		n =  i + 0;
		userWriteFile << n << " " ;
		userWriteFile << firstName << "\t\t";
		userWriteFile << userName << "\t\t";
		userWriteFile << password << "\t\t";
		
		userWriteFile.close();
		
		cout << "Do You Want more Entries or Not (Press the Key Y(Yes) / N(No)): ";
		cin >> character;
		if(character == 'y' || character == 'Y'){
			i++;
		}
		else if(character == 'n' || character == 'N'){
		//otherWise print the table 
		ifstream userReadFile("tableData.txt");
				               
		        while ( 1 ){
//	            userReadFile >> n >> firstName >> userName >> password;     
//				         userReadFile.eof()
		        if(userReadFile.eof())  
		            break;              
					cout << "\n";     
		            cout << n << "." << " " << firstName << "  " << userName << "  " << password << "  " << "\n";
		        }
		        
		        
		        
//		        int storeNvalue = 0;
//		        storeNvalue = n;
//		        cout << storeNvalue;
				break;
				userReadFile.close();
		}
		else{
			cout << "invalid Character";
			break;
		}
	}
	return 0;
}















