//
// Created by hunter-dixon on 1/21/26.
//
#include <iostream>
using namespace std;

// Prompts the user to enter three integers and then sorts them in non-decreasing (ascending) order
int main()
{
    // Prompt the user for input
    cout << "Enter three integers: ";
    int int1{};
    cin >> int1;
    int int2{};
    cin >> int2;
    int int3{};
    cin >> int3;
    cout << endl;

    cout << "Unsorted: " << int1 << " " << int2 << " " << int3 << endl;

    // Sort the integers in ascending order (int1 < int2 < int3)
    int swap{};
    if (int1 > int2) {
        swap = int2;
        int2 = int1;
        int1 = swap;
    }

    if (int2 > int3) {
        swap = int3;
        int3 = int2;
        int2 = swap;
    }

    // Display result of sorted integers
    cout << "Sorted: " << int1 << " " << int2 << " " << int3 << endl;

    return 0;
}