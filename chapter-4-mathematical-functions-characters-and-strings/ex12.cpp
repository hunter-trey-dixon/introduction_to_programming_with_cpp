//
// Created by hunter-dixon on 1/26/26.
//
#include <iostream>
using namespace std;

// Converts a letter grade to number
int main()
{
    // Prompts the user to enter a letter grade
    cout << "Enter a letter grade: ";
    char input{};
    cin >> input;

    // Checks for an invalid input
    bool isValid =
        input == 'A' || input == 'a' ||
            input == 'B' || input == 'b' ||
                input == 'C' || input == 'c' ||
                    input == 'D' || input == 'd' ||
                        input == 'F' || input == 'f';

    // Assigns a numeric value to a valid input
    int num{};
    if (isValid) {
        if (input == 'A' || input == 'a') {
            num = 4;
        } else if (input == 'B' || input == 'b') {
            num = 3;
        } else if (input == 'C' || input == 'c') {
            num = 2;
        } else if (input == 'D' || input == 'd') {
            num = 1;
        } else {
            num = 0;
        }
    }

    // Displays the corresponding numeric value of the letter grade
    if (isValid) {
        cout << "The numeric value for grade " << input << " is " << num << endl;
    } else {
        cout << input << " is an invalid grade" << endl;
    }

    return 0;
}