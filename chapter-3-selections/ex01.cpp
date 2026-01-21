//
// Created by hunter-dixon on 1/20/26.
//
#include <iostream>
#include <cmath>
using namespace std;

// Returns the discriminant. This value determines the number of real roots
double getDiscriminant(double a, double b, double c)
{
    double discriminant{};
    discriminant = pow(b, 2.0) - 4 * a * c;
    return discriminant;
}

// Uses the quadratic equation to return root 1
double getRoot1(double a, double b, double discriminant)
{
    double root1{};
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    return root1;
}

// Uses the quadratic equation to return root 2
double getRoot2( double a, double b, double discriminant)
{
    double root2{};
    root2 = (-b - sqrt(discriminant)) / (2 * a);
    return root2;
}

// Displays the roots of a quadratic equation
int main()
{
    // Prompts the user to enter values for the quadratic equation
    cout << "Enter a, b, c: ";
    double a{};
    cin >> a;
    double b{};
    cin >> b;
    double c{};
    cin >> c;

    // Calculate the discriminant
    double discriminant{ getDiscriminant(a, b, c)};

    // Use the discriminant to determine the number of real roots
    if (discriminant > 0) {
        double root1{ getRoot1(a, b , discriminant) };
        double root2{ getRoot2(a, b , discriminant) };
        cout << "The roots are " << root1 << " and " << root2 << endl;
    } else if (discriminant == 0) {
        double root1{ getRoot1(a, b, discriminant)};
        cout << "The root is " << root1 << endl;
    } else {
        cout << "The equation has no real roots" << endl;
    }

    return 0;
}