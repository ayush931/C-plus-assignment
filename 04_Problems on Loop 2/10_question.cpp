//? Write a C++ program to print a rectangle out of *

#include<iostream>
using namespace std;

int main () {
    int StarRows, StarColumns, i, j;
    cout << "Please enter the number of StarRows: ";
    cin >> StarRows;
    // Takes input from user for StarRows

    cout << "Please enter the number of StarColums: ";
    cin >> StarColumns;
    // Takes input from user for StarColumns

    for (i = 1; i <= StarRows; i++) { // outer for loop
        for (j = 1; j <= StarColumns; j++) { // inner for loop
            cout << '*'; // print star
        }
        cout << "\n"; // move to next line
    }
    return 0;
}