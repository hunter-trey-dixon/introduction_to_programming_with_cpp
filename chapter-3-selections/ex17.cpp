//
// Created by hunter-dixon on 1/25/26.
//
#include <iostream>
using namespace std;

// Stores user input into a variable.
int getUserInput()
{
    int input{};
    std::cin >> input;
    return input;
}

// Returns the sum of all the digits of an integer provided by the user.
void getSumOfDigits(int num)
{
    int sum{};

    // % operator is used to extract digits and / operators to remove the extracted digit
    sum = num % 10;
    num = num / 10;
    sum = sum + (num % 10);
    num = num / 10;
    sum = sum + (num % 10);

    cout << sum << endl;
}

// Reads an integer between 0 and 1000 and adds all the digits in the integer.
int main()
{
    std::cout << "Enter a three digit integer: ";
    int num{ getUserInput() };

    // Check if the user has entered a valid input
    bool isValid = false;
    if ((num >= 100) && (num <= 999))
        isValid = true;

    // Display the result to the user
    if (isValid) {
        getSumOfDigits(num);
    } else {
        cout << num << " is an invalid input!" << endl;
    }

    return 0;
}