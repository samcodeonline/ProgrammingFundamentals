#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
//	function that is going to print only the current date.
//  that would return myName only
//  that would take two parameters , and would tell which is the greater 

/*
 	the key difference in the void and the return type in the functions is that the return type ,  returns us something  
 	as sir ethisham told that if i sum two numbers and then i get the result what is happening here is that the function returned me something
 	
 	on the other hand if i use the void type in the function what is it going to do is that i don't need any thing from it . ok 
 	what i need to do is to just do the task in hand and don't give me any thing.
 	
 	as sir ethisham told that if i want to send the email to more than 200 people , i am just going to call the function for it .
 	and i just want to deliver it i don't want something in return.
 */


int currentDate(int current_date){
	int date = current_date;
	return date;
}

string myName(string my_name){
	string name = my_name ;
	return name;
}


int randomValue (int num){
	srand(0);
	int number = rand();
	number = num;
	return number;
}

void greaterNumber(int number_one , int number_two){
	
 	   if(number_one > number_two){
 	   	cout << number_one;
		}
		else if(number_one < number_two){
			cout << number_two;
		}
		else{
			cout << "Invalid Input";
		}
		
		int number = number_one || number_two;
		cout << "\n";
	}
 
int main() {
	cout << currentDate(3) << endl;
	cout << myName("sarimNadeem") << endl;
    greaterNumber(23,45);
    
//    // Get a random number
//	int random = rand();
//	// Print the random number
//	cout<<random<<endl;
	 cout << randomValue();
	int studentCount , subjectCount;
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
		
//		code for printing the header items of the table 
		cout << "\n\n";
		cout <<"Name\t";
			for(int tableHeader = 0 ; tableHeader < subjectCount ; tableHeader++){
				cout  << nameOfSubject[tableHeader] << "\t";	
				}
					
					cout<<"Obtained\tTotal\tPercent\tGrade";
		
// 		code for printing the names,marks from the user	
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



















