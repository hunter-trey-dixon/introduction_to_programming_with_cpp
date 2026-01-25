//
// Created by hunter-dixon on 1/25/26.
//
#include <iostream>
#include <cmath>
using namespace std;

// Calculate the area of an equilateral triangle
void getArea(int edge)
{
    double area = (sqrt(3) / 4) * pow(edge, 2);
    cout << "Equilateral Triangle Edge Length: " << edge << "\n";
    cout << "Equilateral Triangle Area: " << area << endl;
}

// Computes the area of an equilateral triangle
int main()
{
    // Generate three edges of a triangle
    srand(time(0));
    int edge1 = rand() % 10;
    int edge2 = rand() % 10;
    int edge3 = rand() % 10;

    // Check if all three edges are of equal length
    bool isValid = false;
    if ((edge1 == edge2) && (edge1 == edge3) && (edge2 == edge3))
        isValid = true;

    // Display results
    if (isValid) {
        getArea(edge1);
    } else {
        cout << "Invalid edge length." << endl;
    }

    return 0;
}