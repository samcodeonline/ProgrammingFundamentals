#include <iostream>
using namespace std;

int main() {
    // Define a 3x3 matrix
    int matrix[3][3];

    // Prompt the user to enter elements for the matrix
    cout << "Enter elements for a 3x3 matrix:" << endl;

    // Input elements for the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
//            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Print the matrix
    cout << "The 3x3 matrix is:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

