//
// Created by hunter-dixon on 1/26/26.
//
#include <iostream>
using namespace std;

// Phone key pads: the international standard letter/number mapping found on the telephone
int main()
{
    // Prompts the user to enter a letter
    cout << "Enter a letter: ";
    char input{};
    cin >> input;

    // Displays the number corresponding to that letter
    if (input > 'w' || (input >= 'W' && input <= 'Z'))
        cout << input << " is 9";
    else if (input > 't' || (input >= 'T' && input <= 'V'))
        cout << input << " is 8";
    else if (input > 'p' || (input >= 'P' && input <= 'S'))
        cout << input << " is 7";
    else if (input > 'm' || (input >= 'M' && input <= 'O'))
        cout << input << " is 6";
    else if (input > 'j' || (input >= 'J' && input <= 'L'))
        cout << input << " is 5";
    else if (input > 'g' || (input >= 'G' && input <= 'I'))
        cout << input << " is 4";
    else if (input > 'd' || (input >= 'D' && input <= 'F'))
        cout << input << " is 3";
    else if (input > 'a' || (input >= 'A' && input <= 'C'))
        cout << input << " is 2";
    else
        cout << input << " is an invalid input";

    return 0;
}