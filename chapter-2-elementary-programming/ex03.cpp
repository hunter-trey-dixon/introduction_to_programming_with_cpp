//
// Created by hunter-dixon on 1/17/26.
//
#include <iostream>

// Stores user input into a variable
double userInput()
{
    double input{};
    std::cin >> input;
    return input;
}

// Converts length in feet to meters
double getMeters(double lengthFeet)
{
    double lengthMeters{};
    lengthMeters = lengthFeet * 0.305 / 1;
    return lengthMeters;
}

// Converts a length, entered by the user, in feet to meters.
int main()
{
    std::cout << "Enter a length in feet: ";
    double lengthFeet{ userInput() };
    double lengthMeters{ getMeters(lengthFeet) };
    std::cout << lengthFeet << " feet is " << lengthMeters << " meters " << std::endl;

    return 0;
}