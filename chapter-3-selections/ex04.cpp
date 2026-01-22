//
// Created by hunter-dixon on 1/21/26.
//
#include <iostream>
using namespace std;

// Displays if the speed entered by a user matches a speed limit
int main()
{
    // Prompt the user to enter the speed of a vehicle
    cout << "Enter the speed of a vehicle: ";
    int speed{};
    cin >> speed;

    // Selects whether the speed is in agreement with the speed limit
    if (speed < 20) {
        cout << speed << " is too slow" << endl;
    } else if (speed > 80) {
        cout << speed << " is too fast" << endl;
    } else {
        cout << speed << " is just right";
    }

    return 0;
}