//
// Created by hunter-dixon on 1/26/26.
//
#include <iostream>
using namespace std;

// Converts an uppercase letter to lowercase
int main()
{
    // Prompt the user to enter an uppercase letter
    cout << "Enter an uppercase letter: ";
    char input{};
    cin >> input;

    // Convert the uppercase letter to lowercase letter
    char toLowercase{};
    toLowercase = static_cast<char>(static_cast<int>(input) + 32);

    // Output the lowercase letter
    cout << "The lowercase letter is " << toLowercase << endl;

    return 0;
}