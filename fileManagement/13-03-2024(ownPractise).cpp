#include <iostream>
#include <fstream>
using namespace std;
int main(){
	
	char userData[2000];
	cout << "Tell us about yourself" << endl;
	 cin.getline(userData,2000);
//	ofstream myFile("save.txt"); \\ it is only used for open it is specified
	fstream myFile("save.txt", ios::out|ios::app);
	myFile << " " << userData << endl;
    myFile.close();
    cout << "The write process is done" << endl << endl;
    cout << "File Read Operation";
    cout << "\n";
    char userDataTwo[2000];
//    ifstream myFileRead("save.txt");  // it is only for the read it is specified
    fstream myFileRead("save.txt" , ios::in);
    myFileRead.getline(userDataTwo,2000);
    cout << userDataTwo << " ";
    myFileRead.close();
    cout << "\n";
    cout << "The read process is done" << " " << endl << endl;
	return 0;
}

//www.programiz.com
//<a href="https://www.mygreatlearning.com" data-internallinksmanager029f6b8e52c="11" title="Great Learning Homepage" target="_blank" rel="noopener">Great Learning</a>






