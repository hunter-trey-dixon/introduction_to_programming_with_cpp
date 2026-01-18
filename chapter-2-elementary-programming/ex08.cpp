//
// Created by hunter-dixon on 1/18/26.
//
#include <iostream>
#include <ctime>
using namespace std;

// Processes user input
int getUserInput()
{
    int input{};
    cin >> input;
    return input;
}

// Prompts the user to enter the time zone offset to GMT and displays the...
// ...time in the specified time zone.
int main()
{
    // User input request
    cout << "Enter the time zone offset to GMT: ";
    int timezoneOffset{ getUserInput() };

    // Obtain the total seconds since the midnight, Jan 1, 1970
    int totalSeconds = static_cast<int>(time(nullptr));;

    // Adjust the total seconds based on the time zone offset provided by user
    totalSeconds = totalSeconds + timezoneOffset * 3600 / 1;

    // Compute the current second in the minute in the hour
    int currentSecond = totalSeconds % 60;

    // Obtain the total minutes
    int totalMinutes = totalSeconds / 60;

    // Compute the current minute in the hour
    int currentMinute = totalMinutes % 60;

    // Obtain the total hours
    int totalHours = totalMinutes / 60;

    // Compute the current hour
    int currentHour = totalHours % 24;

    // Display results
    cout << "Cuuremt time is " << currentHour << ":"
        << currentMinute << ":" << currentSecond << " GMT" <<endl;

    return 0;
}