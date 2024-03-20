// main.cpp
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;
int main()
{
    string file_name = "tableData.txt";

    /*  If you write a record number for each user (along with his 
     other data), then you must read the entire file to discover 
     the record number of the last record.
      
      That is what this first loop does.
	*/
    // Open the file for input.
    ifstream userReadFile{ file_name };
    if (!userReadFile.is_open())
    {
    	// The cerr object in C++ is used to print error messages.
        cerr << "Could not open input file: " << file_name << "\n\n";
        return 1;
    }

    /*  Read all the records. Only the data from the final record 
      is saved.
     
     This is the proper way to test for input failure.
     The `eof` test used in your program is not recommended.
     See the comments posted by other users.
     
     If any one of `a`, `b`, `c`, or `d` cannot be read,
     then `userReadFile` will be placed into a failed state, 
     and `userReadFile.fail()` will be `true`.
     
     This is a shortcut way to test `userReadFile.fail()`.
     When used as the condition for an if-statement or 
     while-loop, the expression `userReadFile >> x` will 
     attempt to input `x`, and then return `!userReadFile.fail()`
      to the if-statement or while-loop. Note the 
     exclamation point operator `!`. This is the same 
     as "while not fail" or "if not fail."
     
    */

    int lastRecordNumber = 0;  // anticipating an empty file
    int a;
    string b, c, d;
    while (userReadFile >> a >> b >> c >> d) {
        lastRecordNumber = a;
    }
    userReadFile.close();

    /*  At this point, `lastRecordNumber` holds the number
      of the last record that was read successfully.
      This is the answer to your original question.
      
     Next, run a loop to input records from the user.
      It is convenient to open the file for output only 
     once, and hold it open during this loop. We will 
     close the file when this loop is finished.
	*/
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

        /*  Write record to file.
        // Note that `lastRecordNumber` is incremented before 
        // writing it to the file.
        //
        // Output exactly one line, followed a by newline.
        // Do not output any other newlines.
        // Note that the tab character has fallen out of favor.
        // You can use `setw` to get better control of 
        // alignment. For now, however, the tab remains.
		*/
        userWriteFile
            << ++lastRecordNumber
            << ' ' << firstName
            << '\t' << userName
            << '\t' << password
            << '\n';

        /*  Ask user whether to input more records.
          Keep the Yes/No code together. Run a small loop
          to trap invalid entries.
        */ 
//        for (;;)
		while(inputMore == true)
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
            }
        }
    }

    // Now we close the output file.
    userWriteFile.close();

    // All that remains is to read and display the file.
    // Note that this loop should not be placed inside 
    // the loop the writes to the file.

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
    return 0;
    
    
    
}
// end file: main.cpp






