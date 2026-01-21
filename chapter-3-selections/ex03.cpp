//
// Created by hunter-dixon on 1/20/26.
//
#include <iostream>
using namespace std;

double getDeterminant(double a, double b, double c, double d)
{
    double determinant{};
    determinant = a * d - b * c;
    return determinant;
}

double getX(double a, double b, double c, double d, double e, double f)
{
    double x{};
    x = (e * d - b * f) / (a * d - b * c);
    return x;
}

double getY(double a, double b, double c, double d, double e, double f)
{
    double y{};
    y = (a * f - e * c) / (a * d - b * c);
    return y;
}

// Solves a 2 X 2 system of linear equations by using Cramer's rule
int main()
{
    // Prompt the user to enter inputs
    cout << "Enter a, b, c, d, e, f: ";
    double a{};
    cin >> a;
    double b{};
    cin >> b;
    double c{};
    cin >> c;
    double d{};
    cin >> d;
    double e{};
    cin >> e;
    double f{};
    cin >> f;

    // Calculate the determinant of the matrix
    double determinant{ getDeterminant(a, b, c, d) };

    // Calculate the x and y values for the system of linear equations
    if (determinant != 0) {
        double x{ getX(a, b, c, d, e, f) };
        double y{ getY(a, b, c, d, e, f) };
        cout << "x is " << x << " and y is " <<  y << endl;
    } else {
        cout << "The equation has no solution." << endl;
    }

    return 0;
}