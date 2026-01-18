//
// Created by hunter-dixon on 1/17/26.
//
#include <iostream>

// Stores user input into a variable
int getUserInput()
{
    int input{};
    std::cin >> input;
    return input;
}

// Converts the number of minutes, provided by the user, into days
int getNumberDays(int minutes)
{
    int days{};
    days = minutes * 1 / 1440;
    return days;
}

// Prompts the user to enter minutes and displays the number of years and days for the minutes
int main()
{
    std::cout << "Enter the number of minutes: ";
    int minutes{ getUserInput() };
    int days{getNumberDays(minutes)};

    std::cout << minutes << " minutes is approximately " << days / 365  // days / 365, day to year conversion
    << " years and " << days % 365 << " days\n";                        // days % 365, day remainder

    return 0;
}