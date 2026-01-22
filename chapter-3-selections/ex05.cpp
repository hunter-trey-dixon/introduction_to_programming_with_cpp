//
// Created by hunter-dixon on 1/21/26.
//
#include <iostream>
using namespace std;

// Returns the current day of the week and future day of the week
int main()
{
    // Prompt the user to enter today's day of the week (Sunday is 0, Monday is 1, ..., Saturday is 6)
    cout << "Enter today's day: ";
    int day{};
    cin >> day;
    cout << endl;

    // Prompt the user to enter the number of days elapsed since today's day
    cout << "Enter the number of days elapsed since today: ";
    int dayElapsed{};
    cin >> dayElapsed;
    cout << endl;

    // Selects and displays the current day of the week
    if (day == 0) {
        cout << "Today is Sunday and the future day is ";
    } else if (day == 1) {
        cout << "Today is Monday and the future day is ";
    } else if (day == 2) {
        cout << "Today is Tuesday and the future day is ";
    } else if (day == 3) {
        cout << "Today is Wednesday and the future day is ";
    } else if (day == 4) {
        cout << "Today is Thursday and the future day is ";
    } else if (day == 5) {
        cout << "Today is Friday and the future day is ";
    } else {
        cout << "Today is Saturday and the future day is ";
    }

    // Selects and displays the future day of the week
    if ((day + dayElapsed) % 7 == 0) {
        cout << "Sunday" << endl;
    } else if ((day + dayElapsed) % 7 == 1) {
        cout << "Monday" << endl;
    } else if ((day + dayElapsed) % 7 == 2) {
        cout << "Tuesday" << endl;
    } else if ((day + dayElapsed) % 7 == 3) {
        cout << "Wednesday" << endl;
    } else if ((day + dayElapsed) % 7 == 4) {
        cout << "Thursday" << endl;
    } else if ((day + dayElapsed) % 7 == 5) {
        cout << "Friday" << endl;
    } else {
        cout << "Saturday" << endl;
    }

    return 0;
}