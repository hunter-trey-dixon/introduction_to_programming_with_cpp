//
// Created by hunter-dixon on 1/18/26.
//
#include <iostream>
#include <cmath>
using namespace std;

// Returns the input entered by a user
double getInput()
{
    double input{};
    cin >> input;
    return input;
}

// Calculates the distance between two points of the triangle (calculates the length of the sides of a triangle)
double getSide(double x1, double y1, double x2, double y2)
{
    double distance{};
    distance = sqrt(pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0));
    return distance;
}

// Calculates the area of the triangle
double getArea(double s, double side1, double side2, double side3)
{
    double area{};
    area = sqrt(s * (s - side1) * (s - side2) * (s - side3) );
    return area;
}

// Returns the area of a triangle based on inputs provided by the user
int main()
{
    // Prompts the user for input
    cout << "Enter three points for a triangle: ";
    double x1{ getInput() };
    double y1{ getInput() };
    double x2{ getInput() };
    double y2{ getInput() };
    double x3{ getInput() };
    double y3{ getInput() };

    // Returns the length of each side of the triangle
    double side1{ getSide(x1, y1, x2, y2) };
    double side2{ getSide(x2, y2, x3, y3) };
    double side3{ getSide(x3, y3, x1, y1) };

    // Returns the area of the triangle
    double s{ (side1 + side2 + side3) / 2 };
    double area{ getArea(s, side1, side2, side3) };

    // Display the results
    cout << "The area of the triangle is " << area << endl;

    return 0;
}