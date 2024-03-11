#include <iostream>
using namespace std;
//it is the percentage problem
int main() {

	double totalMarks;
	double obtainedMarks = 0;
	int percentageEvaluation=0;
//	char gradeForStudent;
	cout << "Enter the Subject Marks :- " << endl;
	cout << "\n";
	int subjects[3];
	
	for(int i = 0 ; i < 5 ; i++){
		cout << "\n";
		cout << "Student" << i+1 << endl;
		cout << "\n";
		for(int i = 0 ; i < 3; i++){
		cout << "Subject : " << i+1 << endl;
		cin >> subjects[i];
		obtainedMarks = subjects[i] + obtainedMarks;
	 }
	}

	for(int i = 0 ; i < 1 ; i++) {
		cout << "\n";
		for(int i = 0 ; i < 5 ; i++){
			 
		cout << "\n";
		cout << "Result of Student :" << i+1<< endl;
			cout << "Obtained Marks = " << obtainedMarks << endl;
		cout << "Enter the total Marks : " ; 
		cin >> totalMarks;
		percentageEvaluation = (obtainedMarks/totalMarks)*100;
		cout << "Total Percentage = " << percentageEvaluation << "%" << endl;
			if(percentageEvaluation >= 85){
			cout << "STUDENT GRADE : A";
			}
			else if(percentageEvaluation <= 84){
				cout << "STUDENT GRADE : B";
			}
			else if(percentageEvaluation <= 69){
				cout << "STUDENT GRADE : C";
			}
			else if(percentageEvaluation <= 49){
				cout << "STUDENT GRADE : D";
			}
			else{
				cout << "STUDENT GRADE : E";
			}
		}
	
		
	}

				
		
		
		cout << "\n";
		cout << "Click anywhere to stop the program";
			
	return 0;

}





















