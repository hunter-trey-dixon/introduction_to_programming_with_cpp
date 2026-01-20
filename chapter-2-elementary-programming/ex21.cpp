//
// Created by hunter-dixon on 1/19/26.
//
#include <iostream>
using namespace std;

// Returns the user input
double getInput()
{
    double input{};
    cin >> input;
    return input;
}

// Returns the cost of driving
double getCost(double distance, double gasMileage, double fuelCost)
{
    double cost{};
    cost = distance / gasMileage * fuelCost;
    return cost;
}

// Displays the cost associated with driving for a trip
int main()
{
    // Prompt the user for input
    cout << "Enter the driving distance: ";
    double distance{ getInput() };
    cout << "Enter miles per gallon: ";
    double gasMileage{ getInput() };
    cout << " Enter price per gallon: ";
    double fuelCost{ getInput() };

    // Calculates the cost of driving
    double cost{ getCost(distance, gasMileage, fuelCost) };

    // Display the results
    cout << "The cost of driving is $"
        << static_cast<int>(cost * 100) / 100.0 << endl;

    return 0;
}