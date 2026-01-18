//
// Created by hunter-dixon on 1/17/26.
//
#include <iostream>

// Stores user input into a variable.
int getUserInput()
{
    int input{};
    std::cin >> input;
    return input;
}

// Returns the sum of all the digits of an integer provided by the user.
int getSumOfDigits(int num)
{
    int sum{};

    // % operator is used to extract digits and / operators to remove the extracted digit
    sum = num % 10;
    num = num / 10;
    sum = sum + (num % 10);
    num = num / 10;
    sum = sum + (num % 10);

    return sum;
}

// Reads an integer between 0 and 1000 and adds all the digits in the integer.
int main()
{
    std::cout << "Enter a number between 0 and 1000: ";
    int num{ getUserInput() };
    int sumOfDigits{ getSumOfDigits(num) };

    std::cout << "The sum of the digits is " << sumOfDigits << std::endl;
    return 0;
}