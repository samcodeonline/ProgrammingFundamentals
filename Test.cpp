#include <iostream>
#include<conio.h>
using namespace std;
//it is the percentage problem
int main() {
	
//	string names[5];
	int marks[3][5];
	int totalMarks;
	string stuNames[5];
	
	cout<<"Enter total marks: ";
	cin>> totalMarks;
	
	for(int stu=0; stu<3; stu++){
		cout << "\n";
		cin >> stuNames[stu];
		for (int sub=0; sub<5; sub++){
			cout<<"Enter Subject "<<sub+1<<" Marks: ";
			cin>>marks[stu][sub];
		}
}

	cout<<"Name\tSubj1\tSubj2\tSubj3\tSubj4\tSubj5\n";
	
	for(int stu=0; stu<3; stu++){
		cout<<"\n";
		cout << stuNames[stu] << "\t";
		for (int sub=0; sub<5; sub++){
		cout<<marks[stu][sub]<<"\t";
		}
}
	
return 0;

 


}
