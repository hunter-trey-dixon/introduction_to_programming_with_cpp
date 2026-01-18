//
// Created by hunter-dixon on 1/18/26.
//
#include <complex>
#include <iostream>
using namespace std;

// Processes user input
double getUserInput()
{
    double input{};
    cin >> input;
    return input;
}

// Calculates minimum recommended length of runway
double getRunWayLength(double velocity, double acceleration)
{
    double length{};
    length = pow(velocity, 2.0) / (2 * acceleration);
    return length;
}

// Prompts user to enter a speed and acceleration then displays the minimum length of runway
int main()
{
    // Prompt the user for inputs
    cout << "Enter speed and acceleration: ";
    double speed{ getUserInput() };
    double acceleration{ getUserInput() };

    // Request calculation of runway length
    double runwayLength{getRunWayLength(speed, acceleration)};

    // Display results
    cout << "The minimum runway length for this airplane is " << runwayLength << endl;

    return 0;
}