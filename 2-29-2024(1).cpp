#include <iostream>
using namespace std;
//it is the percentage problem
int main() {
	
	string EnterStudentName[5]={""};
	double totalMarks;
	double obtainedMarks[3];
//	[2]
	int percentageEvaluation=0;
	string tableHeaderContent[] = {"Name","dsa","PF","Logic"};
 
	cout << "Enter the Subject Marks :- " << endl;
	cout << "\n";
	int subjects[3];
	
//	for the time being i am keeping i < 1
	for(int i = 0 ; i < 5 ; i++){
		cout << "\n";
		cout << "Student" << i+1 << endl;
		cout << "\n";
		cout << "Student Name : ";
		cin >> EnterStudentName[i];
		cout << "\n";

		for(int i = 0 ; i < 3; i++){
		cout << "Subject : " << i+1 << endl;
		cout << "Marks : ";
		cin >> subjects[i];
		obtainedMarks[i] = subjects[i] + obtainedMarks[i];
	 }
	 
	}
	
	
	//		printing in column
		string pressSpace;
		cout << "Type Space : " ;
				cin >> pressSpace;
				cout << "\n";
		if(pressSpace == "space"){
			 
//			cout << "\n" ;
				for(int i = 0 ; i < 4 ; i++){
//					cout << "\t";
			cout<<  tableHeaderContent[i] <<  "|" ; 
//			cout << "\t";
		}
		cout << "\n";
		
		}
		else{
			cout << "print nothing";
		}
		
		for(int i = 0 ; i < 4; i++){
			for(int j = 0 ; j < 3 ; j++){
//			cout << "\t\t" <<  tableHeaderContent[i] <<  " | " ; 
			cout<< EnterStudentName[j] <<  "|" << obtainedMarks[j] << "|";
		}
		}
		

//	for(int i = 0 ; i < 1 ; i++) {
//		cout << "\n";
//		for(int i = 0 ; i < 5 ; i++){
//		cout << "\n";
//		cout << "Result of Student :" << i+1<< endl;
//		cout << "\n";
//			cout << "Obtained Marks = " << obtainedMarks << endl;
//			cout << "\n";
//		cout << "Enter the total Marks : " ; 
// 
//		cin >> totalMarks;
//		percentageEvaluation = (obtainedMarks/totalMarks)*100;
//		
//		cout << "\n";
//		cout << "Total Percentage = " << percentageEvaluation << "%" << endl;
//		cout << "\n";
//			if(percentageEvaluation >= 85){
//			cout << "STUDENT GRADE : A";
//			cout << "\n";
//			}
//			else if(percentageEvaluation <= 84){
//				cout << "STUDENT GRADE : B";
//				cout << "\n";
//			}
//			else if(percentageEvaluation <= 69){
//				cout << "STUDENT GRADE : C";
//				cout << "\n";
//			}
//			else if(percentageEvaluation <= 49){
//				cout << "STUDENT GRADE : D";
//				cout << "\n";
//			}
//			else{
//				cout << "STUDENT GRADE : E";
//				cout << "\n";
//			}
//		}
//	
//		
//	}	
//			
	return 0;

}





















