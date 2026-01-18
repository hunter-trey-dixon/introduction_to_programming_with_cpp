//
// Created by hunter-dixon on 1/18/26.
//
#include <iostream>
using namespace std;

double getUserInput()
{
    double input{};
    cin >> input;
    return input;
}

// Calculates the energy (J) required to heat the water
double energyRequiredJoules(double m, double t0, double t1)
{
    double energyJoules{};
    energyJoules = m * (t1 - t0) * 4184;
    return energyJoules;
}

// Calculates the energy needed to heat water from an initial temperature to a final temperature.
int main()
{
    // Prompts the user input
    cout << "Enter the amount of water in kilograms: ";
    double massKilograms{ getUserInput() };
    cout << "Enter the initial temperature: ";
    double initialTempDegC{ getUserInput() };
    cout << "Enter the final temperature: ";
    double endingTempDegC{ getUserInput() };

    // Request for energy calculation
    double energyJoules{ energyRequiredJoules(massKilograms, initialTempDegC, endingTempDegC) };

    // Displays the result(s)
    cout << "The energy needed is " << energyJoules << endl;
}