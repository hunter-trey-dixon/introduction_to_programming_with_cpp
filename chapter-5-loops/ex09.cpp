//
// Created by hunter-dixon on 1/27/26.
//
#include <iostream>
#include <iomanip>
using namespace std;

// Financial application for computing future apartment rent
int main()
{
    // Initialize variables
    double rent{1000};
    double pct{0.03};
    int numYears{5};

    // Displays rent for the initial year
    cout << "Year 1: $" << fixed << setprecision(2) << rent << "/mo." << "\n";

    // Displays rent for the next four years
    for (int i = 1; i < numYears; i++) {
        rent = rent * (1 + pct);
        cout << "Year " << i + 1 << ": $" << rent << "/mo." << "\n";
    }

    // Displays the total rent for the fifth year
    cout << endl;
    cout << "Year 5 total: $" << rent * 12 << endl;

    return 0;
}