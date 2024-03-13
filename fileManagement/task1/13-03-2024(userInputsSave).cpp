#include <iostream>
#include <fstream>
using namespace std;
int main(){
	cout << "Input Data" << endl;
	string name , userName , password;
	ofstream userFile("UserData.txt" ,ios::app);
	cout << "Name: " << endl;
	cin >> name;
	cout << "User-Name: "<< endl;
	cin >> userName;
	cout << "Password: " << endl;
	cin >> password;
	
	userFile << name << endl;
	userFile << userName << endl;
	userFile << password << endl;
	
	userFile.close();
	
	cout << "The Write Process is Done" << endl;
	
	ifstream userReadFile("UserData.txt");
	cout << name << endl;
	cout << userName << endl;
	cout << password << endl;
	
	userReadFile.close();
	
	cout << "The Read Process is Done"  << endl;
}
