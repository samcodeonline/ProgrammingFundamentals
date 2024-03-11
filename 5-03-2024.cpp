#include <iostream>
#include <conio.h>
using namespace std;
 
int main() {


/*
	1. input the total no of subjects take there names.
	2. 
*/

//    double totalMarks , obtainedMarks = 0;
	int n = 0 ,  percentageEvaluation=0  , totalMarks, totalStudents , totalSubjects  ;
	string stuNames[totalStudents] , nameOfSubjects;
	
	cout << "Enter Total Subjects : ";
	cin >> totalSubjects;
	
	cout<<"Enter total marks: ";
		cin>> totalMarks;
	
	cout << "Total Students : ";
		cin >> totalStudents;
		
	int marks[totalStudents][totalSubjects] ;
	
	for(int stu = 0; stu < totalStudents; stu++){
		cout << "\n";
		cout <<  stu +1 << ":"; 
		cout << "Enter your name  ";
		cin >> stuNames[stu];
		for (int sub = 0; sub < totalSubjects ; sub++){
			cout << "Enter Subject " << sub+1 << " Marks: ";
			cin >> marks[stu][sub];
		}
}

 
	cout<<"Name\tSubj1\tSubj2\tSubj3\tSubj4\tSubj5\n";
 


	for(int stu = 0; stu < totalStudents; stu++){
		cout << "\n";
		cout << stuNames[stu] << "\t";
		for (int sub = 0; sub < totalSubjects ; sub++){
		cout << marks[stu][sub] << "\t";
		}
}
		return 0;
}




 











