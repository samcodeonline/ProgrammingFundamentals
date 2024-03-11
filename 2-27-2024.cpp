#include <iostream>
#include <conio.h>
using namespace std;
int main() {
//	Q: for Printing the Data for the Five Students in 2 Arrays
//string name [5];
//int age [5];
//cout << "Print the names and ages of the Students"<< endl;
//cout << "\n";
//for (int i = 0 ; i < 5 ; i++){
//
//	cout << "Name of the user :";
//	cin >> name[i];
//	cout << "Age of the user :";
//	cin >> age [i];
//	cout << "\n";
//}
//cout << "\n";
//cout << "These are the users that the data has been taken from";
//cout << "\n";
//for (int i = 0 ; i < 5 ; i++){
//	cout << "\n";
//	cout << "Name :" << name[i];
//	cout << "\n";
//	cout << "Age :" << age[i];
//}

//string name [5];
//int age [5];

//	Q : for Printing the data for the Five Students in the single Array
//string data[5];
//
//cout << "Print the names and ages of the Students"<< endl;
//cout << "\n";
//for (int i = 0 ; i < 5 ; i++){
//
//	cout << "Name of the user :";
//	cin >> data[i];
//	cout << "Age of the user :";
//	cin >> data [i];
//	cout << "\n";
//}
//cout << "\n";
//cout << "These are the users that the data has been taken from";
//cout << "\n";
//for (int i = 0 ; i < 5 ; i++){
//	cout << "\n";
//	cout << "Name :" << data[i];
//	cout << "\n";
//	cout << "Age :" << data[i];
//}

//	int unit;  
//
//	cout<<"Enter the unit of usage: ";
//	cin>>unit;
//
//	if(unit<=100) {  
//		cout<<"Bill amount is: ";
//		cout<<unit*5; 
//	}
//	else if(unit<=150) {  
//		cout<<"Bill amount is: ";
//		cout<<(100*5)+(unit-100)*20; 
//	}
//	else if(unit<=200) {  
//		cout<<"Bill amount is: ";
//		cout<<(100*5)+(100*20)+(unit-200)*30; 
//	} else if(unit<=300) {  
//		cout<<"Bill amount is: ";
//		cout<<(100*5)+(100*20)+(100*30)+(unit-300)*50; 
//	} else if(unit>300) { 
//		cout<<"Bill amount is: ";
//		cout<<(100*5)+(100*20)+(100*30)+(100*50)+(unit-300)*70; 
//	} else { 
//		cout<<"Bill amount is: ";
//		cout<<"No value";
//	}
//	getch();

int size=3;
    int a[size][size];
    int row, col, sum;
    cout<<"Please Enter elements in array of size "<<size<<"x"<<size<<endl<<endl;
    for(row=0; row<size; row++)
    {
        for(col=0; col<size; col++)
        {
            cin>>a[row][col];
        }
    }
     for(row=0; row<size; row++)
    {
        for(col=0; col<size; col++)
        {
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    for(row=0; row<size; row++)
    {
        sum = 0;
        for(col=0; col<size; col++)
        {
            sum = sum + a[row][col];
        }
        cout<<"Sum of elements of Row: "<< row+1<<" is "<< sum<<endl;
    }    
    for(col=0; col<size; col++)
    {
        sum = 0;
        for(row=0; row<size; row++)
        {
            sum += a[row][col];
        }
        cout<<"Sum of elements of Column: " <<row+1<<" is "<<sum<<endl;
    }


	return 0;
}








