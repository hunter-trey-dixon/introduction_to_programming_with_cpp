//
// Created by hunter-dixon on 1/17/26.
//
#include <iostream>

// Stores user input into a variable
double getUserInput()
{
    double input{};
    std::cin >> input;
    return input;
}

// Converts pounds to kilograms
double getKilograms(double pounds)
{
    double kilograms{};
    kilograms = pounds * 0.454 / 1;
    return kilograms;
}

// Converts a mass, entered by the user, from pounds to kilograms
int main()
{
    std::cout << "Enter a number in pounds: ";
    double massPounds{ getUserInput() };
    double massKilograms{ getKilograms(massPounds) };

    std::cout << massPounds << " pounds is " << massKilograms << " kilograms" << std::endl;
    return 0;
}