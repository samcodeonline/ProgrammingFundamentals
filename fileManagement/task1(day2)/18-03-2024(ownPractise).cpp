// main.cpp
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
struct User
{
    string first_name;
    string user_name;
    string password;
};

void display_users(vector<User> const& users)
{
    int n{};
    for (auto const& u : users)
    {
        cout
            << ++n << ". " << u.first_name
            << "\n  user name : " << u.user_name
            << "\n  password  : " << u.password
            << "\n\n";
    }
    cout << "\n\n";
}

int main()
{
    string file_name{ "tableData.txt" };

    // Open file for input.
    ifstream ist{ file_name };
    if (!ist.is_open())
    {
        cerr << "Could not open input file: " << file_name << "\n\n";
        return 1;
    }

    // Read file into vector.
    User u;
    vector<User> users;
    while (ist >> u.first_name >> u.user_name >> u.password)
        users.push_back(u);
    ist.close();

    cout << "AFTER READING FILE\n\n";
    display_users(users);

    // Add a user.
    cout 
        << "ADD A USER\n\n"
        << "Enter first name: ";
    cin >> u.first_name;

    cout << "Enter user name: ";
    cin >> u.user_name;

    cout << "Enter password: ";
    cin >> u.password;
    cout << "\n\n\n";

    users.push_back(u);

    cout << "AFTER ADDING A USER\n\n";
    display_users(users);

    // Open file for output.
    ofstream ost{ file_name };
    if (!ost.is_open())
    {
        cerr << "Could not open output file: " << file_name << "\n\n";
        return 2;
    }

    // Write file.
    for (auto const& u : users)
        ost << u.first_name << " " << u.user_name << " " << u.password << '\n';
    ost.close();
    return 0;
}
// end file: main.cpp







