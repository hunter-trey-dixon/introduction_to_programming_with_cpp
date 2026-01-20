//
// Created by hunter-dixon on 1/19/26.
//
#include <iostream>
using namespace std;

double getInput()
{
    double input{};
    cin >> input;
    return input;
}

// Returns the slope of the lines that connects two points
double getSlope(double x1, double y1, double x2, double y2)
{
    double slope{};
    slope = (y2 - y1) / (x2 - x1);
    return slope;
}

// Displays the slope of a line that connects two points
int main()
{
    // Prompt the user for input
    cout << "Enter the coordinates for two points: ";
    double x1{ getInput() };
    double y1{ getInput() };
    double x2{ getInput() };
    double y2{ getInput() };

    // Returns the slope of the lines that connects two points
    double slope{ getSlope(x1, y1, x2, y2) };

    // Display the results
    cout << "The slope for the line that connects two points ("
        << x1 << ", " << y1 << ") " << " and (" << "("
        << x2 << ", " << y2 << ") " << "is " << slope << endl;

    return 0;
}