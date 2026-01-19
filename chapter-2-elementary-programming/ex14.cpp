//
// Created by hunter-dixon on 1/18/26.
//
#include <iostream>
#include <cmath>
using namespace std;

double getInput()
{
    double input{};
    cin >> input;
    return input;
}

double getBodyMassIndex(double weight, double height)
{
    double bodyMassIndex{};
    bodyMassIndex = weight / pow(height, 2.0);
    return bodyMassIndex;
}

// Returns the Body Mass Index (BMI) based on information provided by the user
int main()
{
    // Prompt the user for input
    cout << "Enter weight in pounds: ";
    double weightPounds{ getInput() };
    double weightKilograms { weightPounds * 0.45359237 / 1 };

    cout << "Enter height in inches: ";
    double heightInches{ getInput() };
    double heightMeters{ heightInches * 0.0254 / 1 };

    // Return the BMI result
    double bodyMassIndex{ getBodyMassIndex(weightKilograms, heightMeters) };

    // Display results
    cout << "BMI is " << bodyMassIndex << endl;
}