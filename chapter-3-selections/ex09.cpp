//
// Created by hunter-dixon on 1/24/26.
//
#include <iostream>
using namespace std;

// Displays the day and remaining hours
int main()
{
    // Prompts the user for an input (Sunday is 1, Monday is 2, ..., Saturday is 7)
    cout << "Enter the day number of a week and hours passed: ";
    int day{};
    cin >> day;
    int hours{};
    cin >> hours;

    // Displays the day of the week
    switch (day) {
        case 1: cout << "Today is Sunday" << endl; break;
        case 2: cout << "Today is Monday" << endl; break;
        case 3: cout << "Today is Tuesday" << endl; break;
        case 4: cout << "Today is Wednesday" << endl; break;
        case 5: cout << "Today is Thursday" << endl; break;
        case 6: cout << "Today is Friday" << endl; break;
        case 7: cout << "Today is Saturday" << endl; break;
        default: cout << "Error: invalid input" << endl;
    }

    // Display the hours remaining in the day
    cout << "Remaining Hours: " << 24 - hours << endl;

    return 0;
}