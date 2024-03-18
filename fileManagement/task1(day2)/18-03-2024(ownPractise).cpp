#include <iostream>
#include <fstream>
using namespace std;

class student
{
   int rollno;
   char name[20];
   char branch[3];
   float marks;
   char grade;

public:
   void getdata()
   {
      cout << "Roll Number: ";
      cin >> rollno;
      cout << "Name: ";
      cin >> name;
      cout << "Course: ";
      cin >> branch;
      cout << "Mark: ";
      cin >> marks;

      if (marks >= 75)
         grade = 'A';
      else if (marks >= 60)
         grade = 'B';
      else if (marks >= 50)
         grade = 'C';
      else if (marks >= 40)
         grade = 'D';
      else
         grade = 'F';
   }

   void putdata()
   {
      cout << name << ", roll number " << rollno << " received " << marks << "% marks and ";
      cout << grade << " grade." << "\n";
   }

   int getrno()
   {
      return rollno;
   }
} stud1;

int main()
{
   ofstream fout("marks.txt", ios::out);
   
   char ans = 'y';
   while (ans == 'y' || ans == 'Y')
   {
      stud1.getdata();
      fout.write((char *)&stud1, sizeof(stud1));
      cout << "A new record has been added to the file.\n";
      cout << "\nWant to enter more? (y/n): ";
      cin >> ans;
   }
   fout.close();

   int rno;
   char found;
   ifstream fin("marks.txt", ios::in);
   if (!fin)
   {
      cout << "Error opening the file!\n";
      return 0;
   }

   ans = 'y';
   while (ans == 'y' || ans == 'Y')
   {
      found = 'n';
      cout << "Enter the roll number to be searched for: ";
      cin >> rno;

      while (!fin.eof())               // end-of-file used here
      {
         fin.read((char *)&stud1, sizeof(stud1));
         if (stud1.getrno() == rno)
         {
            stud1.putdata();
            found = 'y';
            break;
         }
      }
      if (found == 'n')
      {
         cout << "\nThe entered roll number does not exist in the file.\n";
         return 0;
      }
      cout << "\nWant to search more? (y/n):";
      cin >> ans;
   }
   fin.close();

   return 0;
   
   
   
   
   
   
   
}
