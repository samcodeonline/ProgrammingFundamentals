#include <iostream>
#include<conio.h>
using namespace std;
 
int main() {


/*
	1. input the total no of subjects take there names.
	2. 
*/

//    double totalMarks , obtainedMarks = 0;
	int n = 0   , percentageEvaluation=0 , marks[4][3], totalMarks, totalStudents, totalSubjects ;
	string stuNames[n] , nameOfSubjects;
	
	cout << "Enter Total Subjects : ";
	cin >> totalSubjects;
	for(int i = 0 ; i < totalSubjects ; i++){
	cout <<  "Subject Name : " << i + 1 << endl;
	cin >> nameOfSubjects;
	}
	
	cout<<"Enter total marks: ";
	cin>> totalMarks;
	
	cout << "Total Students : ";
		cin >> totalStudents;
	for(int stu=0; stu<totalStudents; stu++){
		cout << "\n";
		cout <<  stu +1 << ":"; 
		cout << "Enter your name  ";
		cin >> stuNames[stu];
		for (int sub=0; sub<totalSubjects ; sub++){
			cout<<"Enter Subject "<<sub+1<<" Marks: ";
			cin>> marks[stu][sub];
		}
}

 
//	cout<<"Name\t " << nameOfSubjects[n] "\n";
 


	for(int stu=0; stu<totalStudents; stu++){
		cout<<"\n";
		cout<<stuNames[stu] << "\t";
		for (int sub=0; sub<totalSubjects ; sub++){
		cout<<marks[stu][sub]<<"\t";
		}
}
		return 0;
}




 











