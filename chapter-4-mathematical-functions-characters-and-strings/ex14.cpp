//
// Created by hunter-dixon on 1/26/26.
//
#include <iostream>
using namespace std;

// Convert decimal to hex
int main()
{
    // Prompt the user to enter an integer  between 0 and 15
    cout << "Enter a decimal value (0 to 15): ";
    int decimal{};
    cin >> decimal;

    // Display the corresponding hex number of the integer
    if (decimal > 15 || decimal < 0)
        cout << decimal << " is invalid input" << endl;
    else if (decimal >= 0 && decimal <= 9)
        cout << "The hex value is " << decimal << endl;
    else {
        cout << "The hex value is "
            << static_cast<char>(65 + (decimal - 10))
            << endl;
    }

    return 0;
}