#include <iostream>
#include <fstream>
using namespace std;
//-------------------------------------------------------
//This is used to display the recently modified, or added
//record for the useres info
//-------------------------------------------------------
void displayRecord()
{
	fstream recordFile;
	recordFile.open( "H:\\records.txt", ios::in);
	recordFile.seekg(-sizeof(participant), ios::cur );
	participant person;

	cout << "\n\t**********Current Record**********";



	recordFile.read((char*) &person, sizeof (participant));

	cout << endl;
	cout << "\nName: \t\t" << person.name
		  << "\nAge: \t\t" << person.age
		  << "\nGender: \t" << person.gender
		  << "\nBelt: \t\t" << person.belt
		  << "\nWeight: \t" << person.weight
		  << "\nHeight: \t" << person.height
		  << "\nDate modified: \t" << ctime(&person.modified);

  getch();

}
//---------------------------------------------------------------------------
//This is the update of the record where the user selects a choice thorugh a 
//switch statement which goes to the search (below) and sends it back here
//once the choice of record to be modified has been entered
//---------------------------------------------------------------------------
void updateRecord()
{
	clrscr();
	fstream recordFile;
	/*this below is where i think the issue lies for some reason
        the ios::ate | ios::out | ios::app is not editing the field in the
        manner i would like, in one way it would just append in another
        it would overwrite and append, and the last just clears info*/
        recordFile.open( "H:\\records.txt", ios::binary | ios::ate );

	participant person;



	cout << "\t**********Edit a new Record**********\n\n";

	cout << "\nPlease specify the participants gender: ";
	cin >> person.gender;
	cout << "\nPlease enter the participants belt category: ";
	cin >> person.belt;
	cout << "\nPlease enter the participants name: ";
	cin >> person.name;
	cout << "\nPlease enter the participants age: ";
	cin >> person.age;
	cout << "\nPlease enter the participants wieght: ";
	cin >> person.weight;
	cout<< "\nPlease enter the participants height (in cm): ";
	cin >> person.height;
	time(&person.modified);

	//recordFile.seekp(0, ios::cur); i used this just to see what would happen
	recordFile.write((char*) &person, sizeof(participant)); // i also tried using
        //recordFile.write( reinterpret_cast < const char * >( &person), participant( //Tools ) );
	recordFile.close();

	cout << "Below is the submitted record";
	getch();


}
//---------------------------------------------------------------------------
//searches for a specific record by going through the participants entry number
//and subtracting 1 to get its record location (ps this works the above bit doesnt)
//---------------------------------------------------------------------------
void search()
{
	clrscr();
	cout << "\t**********Search for a record**********\n\n";
	fstream recordFile;
	recordFile.open( "H:\\records.txt", ios::in | ios::binary);

	int participantNum;
	participant person;

	cout << "Which Participant would you like to search for: ";
	cin >> participantNum;

	recordFile.seekg((participantNum - 1)*sizeof(participant), ios::beg);

	if (recordFile.eof() && participantNum == 0)
	{
		search();
	}

	recordFile.read((char*) &person, sizeof (participant));
	cout << "\n\nReading request please hold...";



	recordFile.close();


}
