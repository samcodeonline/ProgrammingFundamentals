#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int ID = 0;
struct Student {
    int id;
    string firstName;
    string userName;
    string password;
};

void addStudent() {
    Student student;
    cout << "\n\tEnter First Name : ";
    cin.get();
    getline(cin, student.firstName); //Nouman Habib
    cout << "\n\tEnter User Name : ";
    cin >> student.userName;
    cout << "\n\tEnter Password : ";
    cin >> student.password;
    // for the specific id 
    ID++;
    student.id = ID;
    
    ofstream write;
    write.open("student.txt", ios::app);
    write << "\n" << ID;
    write << "\n" << student.firstName ;
    write << "\n" << student.userName ;

    write << "\n" << student.password ;
    
    write.close();
    write.open("id.txt");
    write << ID;
    write.close();
    cout << "\n\tData save to file";
}
//cout << "\n";
void print(Student s) {
    cout << "\n\t---Student Data---";
    cout << "\n\tID is : " << s.id;
    cout << "\n\tFirst Name is : " << s.firstName;
    cout << "\n\tUser Name is : " << s.userName;
    cout << "\n\tPassword is : " << s.password;
     
}
//cout << "\n";
int readData() {
    Student student;
    ifstream read;
    read.open("student.txt");
    while (!read.eof()) {
        read >> student.id;
        read.ignore();
        getline(read, student.firstName);
        read >> student.userName;
        read >> student.password;
        
        print(student);
    }
    read.close();
}
//cout << "\n";
int searchData() {
    int id;
    cout << "\n\tEnter student id want to search : ";
    cin >> id;
    Student student;
    ifstream read;
    read.open("student.txt");
    while (!read.eof()) {
        read >> student.id;
        read.ignore();
        getline(read, student.firstName);
        read >> student.userName;
        read >> student.password;
         
        if (student.id == id) {
            print(student);
            return id;
        }
    }
}
//cout << "\n";
void deleteData() {
    int id = searchData();
    cout << "\n\tYou want to delete record (y/n) : ";
    char choice;
    cin >> choice;
    if (choice == 'y') {
        Student student;
        ofstream tempFile;
        tempFile.open("temp.txt");
        ifstream read;
        read.open("student.txt");
        while (!read.eof()) {
            read >> student.id;
            read.ignore();
            getline(read, student.firstName);
            read >> student.userName;
            read >> student.password;
             
            if (student.id != id) {
                tempFile << "\n" << student.id;
                tempFile << "\n" << student.firstName;
                tempFile << "\n" << student.userName;
                tempFile << "\n" << student.password;
            }
        }
        read.close();
        tempFile.close();
        remove("student.txt");
        rename("temp.txt", "student.txt");
        cout << "\n\tData deleted successfuly";
    }
    else {
        cout << "\n\tRecord not deleted";
    }
}
//cout << "\n";
void updateData() {
    int id = searchData();
    cout << "\n\tYou want to update record (y/n) : ";
    char choice;
    cin >> choice;
    if (choice == 'y') {
        Student newData;
        cout << "\n\tEnter First Name : ";
        cin.get();
        getline(cin, newData.firstName);
        cout << "\n\tEnter User Name : ";
        cin >> newData.userName;
        cout << "\n\tEnter Password : ";
        cin >> newData.password;
         
        Student student;
        ofstream tempFile;
        tempFile.open("temp.txt");
        ifstream read;
        read.open("student.txt");
        while (!read.eof()) {
            read >> student.id;
            read.ignore();
            getline(read, student.firstName);
            read >> student.userName;
            read >> student.password;
            
            if (student.id != id) {
                tempFile << "\n" << student.id;
                tempFile << "\n" << student.firstName;
                tempFile << "\n" << student.userName;
                tempFile << "\n" << student.password;
                 
            }
            else {
                tempFile << "\n"<< student.id;
                tempFile << "\n"<< newData.firstName;
                tempFile << "\n"<< newData.userName;
                tempFile << "\n" << newData.password;
                 
            }
        }
        read.close();
        tempFile.close();
        remove("student.txt");
        rename("temp.txt", "student.txt");
        cout << "\n\tData updated successfuly";
    }
    else {
        cout << "\n\tRecord not deleted";
    }
}
//cout << "\n";
int main()
{
    ifstream read;
    read.open("id.txt");
    if (!read.fail()) {
        read >> ID;
    }
    else {
        ID = 0;
    }
    read.close();

    while (true) {
        cout << "\n\t1.Add data";
        cout << "\n\t2.See  data";
        cout << "\n\t3.Search  data";
        cout << "\n\t4.Delete data";
        cout << "\n\t5.Update  data";

        int choice;
        cout << "\n\tEnter choice : ";
        cin >> choice;
        switch (choice) {
        case 1:
            addStudent();
            cout << "\n";
            break;
        case 2:
            readData();
            cout << "\n";
            break;
        case 3:
            searchData();
            cout << "\n";
            break;
        case 4:
            deleteData();
            cout << "\n";
            break;
        case 5:
            updateData();
            cout << "\n";
            break;
        }
    }

}












