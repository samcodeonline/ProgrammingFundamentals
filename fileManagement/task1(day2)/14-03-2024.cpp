#include <iostream>
#include <fstream>
using namespace std;
int main(){
	cout << "\n";
	int i = 1; 
	
	while(i > 0){
		cout << "Input Data" << endl;
		string   firstName , userName , password;
		char character;
		ofstream userFile("tableData.txt" , ios::app);
		cout << "Name: "  ;
		cin >> firstName;
		cout << "User-Name: ";
		cin >> userName;
		cout << "Password: ";
		cin >> password;
		
		userFile << "\n";
		int n = 0;
		n =  i + 0;
		userFile << n << ": ";
		userFile << firstName << "\t\t";
		userFile << userName << "\t\t";
		userFile << password << "\t\t";
		
		userFile.close();
		
		cout << "Do You Want more Entries or Not (Press the Key Y/N): ";
		cin >> character;
		if(character == 'y' || character == 'Y'){
			i++;
		}else if(character == 'n' || character == 'N'){
		//otherWise print the table 
		ifstream userReadFile("tableData.txt");
		cout << "\n";		               
		        while ( 1 ){
	            userReadFile >> n >> firstName >> userName >> password;              
		            if(userReadFile.eof())            
					cout << "\n";     
		                break;              
		            cout << n << ". " << firstName << "  " << userName << "  " << password << "  " << " " << "\n";       
		        }
				userReadFile.close();
				break;
		}else{
			cout << "invalid Character";
			break;
		}
	}
	return 0;
}















