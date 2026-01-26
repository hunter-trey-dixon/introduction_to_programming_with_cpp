//
// Created by hunter-dixon on 1/26/26.
//
#include <iostream>
using namespace std;

// Checks whether a character is a vowel or a consonant
int main()
{
    // Prompt the user to enter a letter
    cout << "Enter a letter: ";
    char input{};
    cin >> input;

    // Determines if user entered a valid input
    bool isValid =
        ((static_cast<int>(input) >= 65 && static_cast<int>(input) <= 90)) ||
            ((static_cast<int>(input) >= 97 && static_cast<int>(input) <= 122));

    // Determines if user entered a vowel
    bool isVowel =
        input == static_cast<int>('A') || input == static_cast<int>('a') ||
            input == static_cast<int>('E') || input == static_cast<int>('e') ||
                input == static_cast<int>('I') || input == static_cast<int>('i') ||
                    input == static_cast<int>('O') || input == static_cast<int>('o') ||
                        input == static_cast<int>('U') || input == static_cast<int> ('u');

    // Displays whether the letter is a vowel, consonant, or invalid input
    if (isValid) {
        if (isVowel) {
            cout << input << " is a vowel" << endl;
        } else {
            cout << input << " is a consonant" << endl;
        }
    } else {
        cout << input << " is an invalid input" << endl;
    }

    return 0;
}