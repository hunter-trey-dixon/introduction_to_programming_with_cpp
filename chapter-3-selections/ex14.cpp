//
// Created by hunter-dixon on 1/24/26.
//
#include <iostream>
#include <ctime>
using namespace std;

// Generates a random two-digit integer and determines the accuracy of the user's prediction
int main()
{
    // Program generates a random two-digit integer.
    srand(time(0));
    int target = rand() % 100;

    // Extract each digit from the program generated number
    int number1 = target / 10;
    int number2 = target % 10;

    // Prompt the user to enter a two-digit integer.
    cout << "Enter a two digit integer: ";
    int input{};
    cin >> input;

    // Extract each digit from the user provided number
    int number3 = input / 10;
    int number4 = input % 10;

    // Determines the accuracy of the user's prediction relative to the program generated value
    if ((number1 == number3) && (number2 == number4)) {
        cout << "Program: \t" << number1 << number2 << "\t\tUser: \t" << input << endl;
        cout << "Accuracy: \t 100%" << endl;
    } else if ((number1 == number3) ||
                (number1 == number4) ||
                (number2 == number3) ||
                (number2 == number4)) {
        cout << "Program: \t" << number1 << number2 << "\t\tUser: \t" << input << endl;
        cout << "Accuracy: \t 50%" << endl;
    } else {
        cout << "Program: \t" << number1 << number2 << "\t\tUser: \t" << input << endl;
        cout << "Accuracy: \t 0%" << endl;
    }

    return 0;
}