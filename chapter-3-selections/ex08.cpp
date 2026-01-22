//
// Created by hunter-dixon on 1/21/26.
//
#include <iostream>
using namespace std;

// Prompts the user to enter the edges of a triangle and then compares them
int main()
{
    // Prompt the user for input
    cout << "Enter the edges of a triangle: ";
    int edge1{};
    cin >> edge1;
    int edge2{};
    cin >> edge2;
    int edge3{};
    cin >> edge3;
    cout << endl;

    // Compare the length of each edge and count the number of equivalent edges
    int numOfEquivalentEdges{};
    if (edge1 == edge2)
        numOfEquivalentEdges++;
    if (edge1 == edge3)
        numOfEquivalentEdges++;
    if (edge2 == edge3)
        numOfEquivalentEdges++;

    // Increments the number of equivalent edges if only one pair exists
    // For example, if there are one pair of equivalent edges then there must be two equivalent edges
    if (numOfEquivalentEdges != 0){
        if (numOfEquivalentEdges == 1)
            numOfEquivalentEdges++;
    }

    // Display the type of triangle
    if (numOfEquivalentEdges == 3)
        cout << "Number of equivalent edges: " << numOfEquivalentEdges << "\nEquilateral Triangle" << endl;
    else if (numOfEquivalentEdges == 2)
        cout << "Number of equivalent edges: " << numOfEquivalentEdges << "\nIsosceles Triangle" << endl;
    else
        cout << "Number of equivalent edges: " << numOfEquivalentEdges << "\nScalene Triangle" << endl;

    return 0;
}