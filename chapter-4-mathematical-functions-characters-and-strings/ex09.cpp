//
// Created by hunter-dixon on 1/26/26.
//
#include <iostream>
using namespace std;

// Find the ASCII code of a character
int main()
{
    // Prompt the user for an input
    cout << "Enter a character: ";
    char input{};
    cin >> input;

    // Display the ASCII code of the character
    cout << "The ASCII code for the character is " << static_cast<int>(input) << endl;

    return 0;
}