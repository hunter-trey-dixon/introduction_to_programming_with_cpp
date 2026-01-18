//
// Created by hunter-dixon on 1/18/26.
//
#include <iostream>
using namespace std;

// Processes user input
double getUserInput()
{
    double input{};
    cin >> input;
    return input;
}

// Calculates the average acceleration based on the change of velocity over a span of time
double getAverageAcceleration(double vel0, double vel1, double time)
{
    double acceleration{};
    acceleration = (vel1 - vel0) / time;
    return acceleration;
}

// Displays the average velocity based on various user inputs.
int main()
{
    // Prompts the user for inputs
    cout << "Enter the starting velocity (m/s): ";
    double initialVelocity{ getUserInput() };

    cout << "Enter the ending velocity (m/s): ";
    double endingVelocity{ getUserInput() };

    cout << "Enter the timespan (s): ";
    double timespan{ getUserInput() };

    double acceleration = getAverageAcceleration(initialVelocity, endingVelocity, timespan);

    cout << "The average acceleration is " << acceleration << endl;

}