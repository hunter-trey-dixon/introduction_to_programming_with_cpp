//
// Created by hunter-dixon on 1/26/26.
//
#include <iostream>
#include <cmath>
using namespace std;

// Check if the difference between two angles is less than 0.001 degrees
bool areAnglesEqual(double a, double b)
{
    return abs(a - b) < 0.001;
}

// Computing angles of triangle
int main()
{
    // Prompt the user to enter the x- and y- coordinates of three corner points of the first triangle
    cout << "Enter three points of the first triangle: ";
    double x11, y11, x12, y12, x13, y13;
    cin >> x11 >> y11 >> x12 >> y12 >> x13 >> y13;

    // Compute the three sides of the first triangle
    double a1 = sqrt((x12-x13) * (x12 - x13) + (y12 - y13) * (y12 - y13));
    double b1 = sqrt((x11 - x13) * (x11 - x13) + (y11 - y13) * (y11 - y13));
    double c1 = sqrt((x11 - x12) * (x11 - x12) + (y11 - y12) * (y11 - y12));

    // Obtain the three angles in radians
    double A1 = acos((a1 * a1 - b1 * b1 - c1 * c1) / (-2 * b1 * c1));
    double B1 = acos((b1 * b1 - a1 * a1 - c1 * c1) / (-2 * a1 * c1));
    double C1 = acos((c1 * c1 - b1 * b1 - a1 * a1) / (-2 * a1 * b1));

    // Display the angles of the first triangle in degrees
    const double PI = 3.14159;
    cout << "The three angles of the first triangle are "
        << A1 * 180 / PI << " "
        << B1 * 180 / PI << " "
        << C1 * 180 / PI << endl;

    // Prompt the user to enter the x- and y- coordinates of three corner points of the second triangle
    cout << "Enter three points of the second triangle: ";
    double x21, y21, x22, y22, x23, y23;
    cin >> x21 >> y21 >> x22 >> y22 >> x23 >> y23;

    // Compute the three sides of the second triangle
    double a2 = sqrt((x22 - x23) * (x22 - x23) + (y22 - y23) * (y22 - y23));
    double b2 = sqrt((x21 - x23) * (x21 - x23) + (y21 - y23) * (y21 - y23));
    double c2 = sqrt((x21 - x22) * (x21 - x22) + (y21 - y22) * (y21 - y22));

    // Obtain the three angles in radians
    double A2 = acos((a2 * a2 - b2 * b2 - c2 * c2) / (-2 * b2 * c2));
    double B2 = acos((b2 * b2 - a2 * a2 - c2 * c2) / (-2 * a2 * c2));
    double C2 = acos((c2 * c2 - b2 * b2 - a2 * a2) / (-2 * a2 * b2));

    // Display the angles of the first triangle in degrees
    cout << "The three angles of the first triangle are "
        << A2 * 180 / PI << " "
        << B2 * 180 / PI << " "
        << C2 * 180 / PI << endl;

    // Compare whether the angles of both the triangles are equal
    bool isEqual = areAnglesEqual(A1, A2) &&
                    areAnglesEqual(B1, B2) &&
                        areAnglesEqual( C1, C2);

    if (isEqual) {
        cout << "The angles of both the triangles are equal." << endl;
    }
    else {
        cout << "The angles of the triangles are not equal." << endl;
    }

    return 0;
}