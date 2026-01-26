//
// Created by hunter-dixon on 1/26/26.
//
#include <iostream>
using namespace std;

// Returns the days of a month
int main()
{
    // Prompts the user to enter the year and the first three letters of a month name
    cout << "Enter a year: ";
    int year;
    cin >> year;

    cout << "Enter a month: ";
    string month;
    cin >> month;

    // Display the number of days in the month
    if (month == "Jan" || month == "Mar" || month == "May"
          || month == "Jul" || month == "Aug" || month == "Oct" || month == "Dec")
        cout << month << " " << year << " has 31 days" << endl;
    else if (month == "Apr" || month == "Jun" || month == "Sep" || month == "Nov")
        cout << month << " " << year << " has 30 days" << endl;
    else if (month == "Feb")
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            cout << month << " " << year << " has 29 days" << endl;
        else
            cout << month << " " << year << " has 28 days" << endl;
    else
        cout << month << " is not a correct month name " << endl;

    return 0;
}