//
// Created by hunter-dixon on 1/26/26.
//
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Geometry: area of a regular polygon
int main()
{
    // Prompt the user to enter the number of sides and their length of a regular polygon
    cout << "Enter the number of sides: ";
    int numSides{};
    cin >> numSides;

    cout << "Enter the side length: ";
    double sideLength{};
    cin >> sideLength;

    // Calculate the area of a regular polygon
    const double PI = 3.1459;
    double area{};
    area = (numSides * pow(sideLength, 2)) / (4 * tan(PI / numSides));

    // Display the area of the regular polygon
    cout << fixed << setprecision(2) << "The area of the polygon is " << area << endl;

    return 0;
}