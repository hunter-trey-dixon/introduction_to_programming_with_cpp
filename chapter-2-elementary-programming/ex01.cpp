//
// Created by hunter-dixon on 1/17/26.
//
#include <iostream>

// Stores user input into a variable.
double userInput()
{
    double input{};
    std::cin >> input;
    return input;
}

// Converts a temperature from degC to degF.
double celsiusToFahrenheit(double tempCelsius)
{
    double tempFahrenheit{};
    tempFahrenheit = (9.0 / 5) * tempCelsius + 32;
    return tempFahrenheit;
}

// Converts a temperature, provided by a user, from degC to degF.
int main()
{
    std::cout << "Enter a Celsius degree temperature: ";
    double tempCelsius{ userInput() };
    double tempFahrenheit{ celsiusToFahrenheit(tempCelsius) };
    std::cout << tempCelsius << " degrees C  is " << tempFahrenheit << " degrees F" << std::endl;
    return 0;
}