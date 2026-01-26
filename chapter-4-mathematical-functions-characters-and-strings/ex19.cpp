//
// Created by hunter-dixon on 1/26/26.
//
#include <iostream>
using namespace std;

// Sort three cities in ascending order
int main()
{
    // Prompt the user to enter three cities
    string city1, city2, city3;
    cout << "Enter the first city: ";
    getline(cin, city1);
    cout << "Enter the second city: ";
    getline(cin, city2);
    cout << "Enter the third city: ";
    getline(cin, city3);

    // Sort the cities in ascending order
    string temp;
    if (city1 > city2) {
        temp = city2;
        city2 = city1;
        city1 = temp;
    }

    if (city2 > city3) {
        temp = city3;
        city3 = city2;
        city2 = temp;
    }

    if (city1 > city2) {
        temp = city2;
        city2 = city1;
        city1 = temp;
    }

    // Display the cities in ascending order
    cout << "The three cities in alphabetical order are "
        << city1 << " " << city2 << " " << city3 << endl;

    return 0;
}