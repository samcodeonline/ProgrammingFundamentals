// main.cpp
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;
int main()
{
    string file_name = "tableData.txt";
    ifstream userReadFile{ file_name };
    if (!userReadFile.is_open())
    {
    	// The cerr object in C++ is used to print error messages.
        cerr << "Could not open input file: " << file_name << "\n\n";
        return 1;
    }

    int lastRecordNumber = 0;  // anticipating an empty file
    int a;
    string b, c, d;
    while (userReadFile >> a >> b >> c >> d) {
        lastRecordNumber = a;
    }
    userReadFile.close();

    // Open file for output.
    ofstream userWriteFile(file_name, ios::app);
    if (!userWriteFile.is_open())
    {
        cerr << "Could not open output file: " << file_name << "\n\n";
        return 2;
    }

    string firstName, userName, password;
    bool inputMore = true;
    while (inputMore)
    {
        // Input record from user.
        cout << "Input Data" << endl;
        cout << "Name: ";
        cin >> firstName;
        cout << "User-Name: ";
        cin >> userName;
        cout << "Password: ";
        cin >> password;
        cout << endl;

        userWriteFile
            << ++lastRecordNumber
            << ' ' << firstName
            << '\t' << userName
            << '\t' << password
            << '\n';

//        for (;;)
		while(inputMore)
        {
            cout << "Do You Want more Entries or Not (Press the Key Y(Yes) / N(No)): ";
            char character;
            cin >> character;
            cout << '\n';
            if (character == 'y' || character == 'Y') {
                inputMore = true;
                break;  // break out of the for-loop
            }
            else if (character == 'n' || character == 'N') {
                inputMore = false;
                break;  // break out of the for-loop
            }
            else {
                cout << "Invalid Character\n\n";
                break;
            }
        }
    }

    // Now we close the output file.
    userWriteFile.close();

    // Open the file for input.
    userReadFile.open(file_name);
    if (!userReadFile.is_open())
    {
        cerr << "Could not open input file: " << file_name << "\n\n";
        return 3;
    }

    while (userReadFile >> a >> b >> c >> d) {
        cout << a << ". " << b << "  " << c << "  " << d << "\n\n";
    }
    userReadFile.close();
    
    
    // open file to read the content for Updating record
    userReadFile.open(file_name);
    int input;
    cout << "Input the id that you wish to find" << endl;
	cin >> input;

	cout << "\n";
	while(userReadFile >> a >> b >> c >> d)
	{
	   if (input == a) {
	     cout << a << ". " << b << "  " << c << "  " << d << "\n\n";
	    }
	}
	
	cout << "\n";
	cout << "The user to update is as follow" << endl;
    userReadFile.close();
	// open file to write the updated record
	
//	std::fstream s(my_file_path); // use option std::ios_base::binary if necessary
	
	userWriteFile.open(file_name, ios_base::binary);
	userWriteFile.seekp(, ios_base::beg);
	userWriteFile.write(my_data, size_of_data_to_overwrite);
    
    userWriteFile.close();
    
    return 0;
}
// end file: main.cpp



















