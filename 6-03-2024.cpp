#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	int studentCount , subjectCount ;
	
	cout << "No of Students: ";
	cin >> studentCount;
	string studentNames[studentCount];
	cout << "No of Subjects: ";
	cin >> subjectCount;
	
// 		code for adding the header items for the subject
	string nameOfSubject[subjectCount];
	cout << "Enter Subject Names: " << endl;
	for(int printSubjectName = 0 ; printSubjectName < subjectCount ; printSubjectName++){
		cout<< "Subject" << printSubjectName + 1 << " :";
		cin >> nameOfSubject[printSubjectName];
	}
// 		code for taking the names,marks from the user
	int marks[studentCount][subjectCount];
		for(int stu=0; stu<studentCount; stu++){
				cout << "\n";
				cout << "Student Name" << ": ";
				cin >> studentNames[stu];
					
			for (int sub=0; sub<subjectCount; sub++){
				cout<<"Subject"<<sub+1<<" Marks: "; 
				cin >> marks[stu][sub];	
			}
		}
		cout << "\n";
//		code for totalMarks
		double totalMarks = 300;
		cout << "Total Marks (marksCap (300)) :" << totalMarks ;
		cout << "\n";
		
	//code for printing the header items of the table 
		cout << "\n\n";
		cout <<"Name\t";
			for(int tableHeader = 0 ; tableHeader < subjectCount ; tableHeader++){
				cout  << nameOfSubject[tableHeader] << "\t";	
				}
					
					cout<<"Obtained\tTotal\tPercent\tGrade";
		
				// code for printing the names,marks from the user	
			for(int stu=0; stu<studentCount; stu++){
				
				cout<<"\n";      
				cout << studentNames[stu] << "\t";
				
				double obtainedMarks = 0;
					for (int sub=0; sub<subjectCount; sub++){
					cout << marks[stu][sub]<<"\t";
					obtainedMarks += marks[stu][sub];
					}
					cout<<obtainedMarks<<"\t\t";
					cout << totalMarks << "\t";
				
					int percentageEvaluation=0;
					percentageEvaluation = (obtainedMarks/totalMarks)*100;
					
					cout   << percentageEvaluation << "%" << "\t" ;
	// 				string Grade[percentageEvaluation];
					int studentGrade;
					studentGrade = percentageEvaluation;
					if(studentGrade >= 85){
					cout << "A";
					}
					else if(studentGrade > 70 && studentGrade < 85){
						cout << "B"; 
					}
					else if(studentGrade > 50 && studentGrade < 70){
						cout << "C";
					}
					else if(studentGrade > 30 && studentGrade < 50 ){
						cout << "D";
					}
					else{
						cout << "F";
					}
			}
		
return 0;

}



















