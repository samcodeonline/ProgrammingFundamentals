#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	
	int studentCount , subjectCount;
	
	cout << "No of Students: ";
	cin >> studentCount;
	string studentNames[studentCount];
	cout << "No of Subjects: ";
	cin >> subjectCount;
	
	 
	string nameOfSubject[subjectCount];
	cout << "Enter Subject Names: " << endl;
	for(int printSubjectName = 0 ; printSubjectName < subjectCount ; printSubjectName++){
		cout<< "Subject" << printSubjectName + 1 << " :";
		cin >> nameOfSubject[printSubjectName];
	}
	
	
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
		cout << "\n\n";
		cout <<"Name\t";
		for(int tableHeader = 0 ; tableHeader < subjectCount ; tableHeader++){
			cout  << nameOfSubject[tableHeader] << "\t";
			
		}

			for(int stu=0; stu<studentCount; stu++){
				cout<<"\n";      
				cout << studentNames[stu] << "\t";
				for (int sub=0; sub<subjectCount; sub++){
					cout<<marks[stu][sub]<<"\t";
				}
			}
return 0;

}



















