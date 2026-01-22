//
// Created by hunter-dixon on 1/21/26.
//
#include <iostream>
#include <cmath>
using namespace std;

// Calculates and displays the BMI for the user
int main()
{
    // Prompt the user for input
    cout << "Enter weight in pounds: ";
    double weightInPounds{};
    cin >> weightInPounds;
    cout << endl;

    cout << "Enter feet: ";
    double heightInFeet{};
    cin >> heightInFeet;
    cout << endl;

    cout << "Enter inches: ";
    double heightRemainderInInches{};
    cin >> heightRemainderInInches;

    // Constants for unit conversions
    const double KILOGRAMS_PER_POUND = 0.45359237;
    const double METERS_PER_INCH = 0.0254;
    const double INCH_PER_FOOT = 12.0;

    // Compute BMI
    double heightInInches = heightRemainderInInches + heightInFeet * INCH_PER_FOOT;
    double weightInKilograms = weightInPounds * KILOGRAMS_PER_POUND;
    double heightInMeters = heightInInches * METERS_PER_INCH;
    double bmi = weightInKilograms /  pow(heightInMeters, 2);

    // Display result
    cout << "BMI is " << bmi << endl;
    if (bmi < 18.5)
        cout << "Underweight" << endl;
    else if (bmi < 25)
        cout << "Normal" << endl;
    else if (bmi < 30)
        cout << "Overweight" << endl;
    else
        cout << "Obese" << endl;

    return 0;
}