#include <iostream>
using namespace std;
//it is the percentage problem
int main() {
	
	string EnterStudentName[5],tableHeaderContent[] = {"NAME","DSA","PF","MATHS"};
	double totalMarks , obtainedMarks = 0;
	int percentageEvaluation=0,subjectMarks[3];
	cout << "Enter the Subject Marks :- " << endl;
	cout << "\n";

	for(int i = 0 ; i < 5 ; i++){
		cout << "\n";
		cout << "Student" << i+1 << endl;
		cout << "\n";
		cout << "Student Name : ";
		cin >> EnterStudentName[i];
		cout << "\n";
		
		for(int i = 0 ; i < 3 ; i++){
		cout << "Subject : " << i+1 << endl;
		cout << "Marks : ";
		cin >> subjectMarks[i];
//		obtainedMarks[i] = subjectMarks[i] + obtainedMarks[i];
		}
		
	}
	
	cout << "\n";
	
		 
		 
	for(int i = 0 ; i < 1 ; i++) {
		cout << "\n";
		for(int i = 0 ; i < 5 ; i++){
		cout << "\n";
		cout << "Result of Student :" << i+1<< endl;
		cout << "\n";
			cout << "Obtained Marks = " << obtainedMarks << endl;
			cout << "\n";
		cout << "Enter the total Marks : " ; 
 
		cin >> totalMarks;
		percentageEvaluation = (obtainedMarks/totalMarks)*100;
		
		cout << "\n";
		cout << "Total Percentage = " << percentageEvaluation << "%" << endl;
		cout << "\n";
			if(percentageEvaluation >= 85){
			cout << "STUDENT GRADE : A";
			cout << "\n";
			}
			else if(percentageEvaluation <= 84){
				cout << "STUDENT GRADE : B";
				cout << "\n";
			}
			else if(percentageEvaluation <= 69){
				cout << "STUDENT GRADE : C";
				cout << "\n";
			}
			else if(percentageEvaluation <= 49){
				cout << "STUDENT GRADE : D";
				cout << "\n";
			}
			else{
				cout << "STUDENT GRADE : E";
				cout << "\n";
			}
		}
	
		
	}	
			
	return 0;

}





















