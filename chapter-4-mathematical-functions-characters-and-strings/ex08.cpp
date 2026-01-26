//
// Created by hunter-dixon on 1/26/26.
//
#include <iostream>
using namespace std;

// Find the character of an ASCII code
int main()
{
    // Prompt the user to enter an ASCII code (an integer between 0 and 127
    cout << "Enter an ASCII code: ";
    int input{};
    cin >> input;

    // Display the character associated with the ASCII code
    char output1 = static_cast<char>(input);

    cout << "The character is " << output1 << endl;
}