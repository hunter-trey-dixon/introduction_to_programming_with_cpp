//
// Created by hunter-dixon on 1/18/26.
//
#include <iostream>
#include <cmath>
using namespace std;

// Calculates the wind-chill temperature
double getWindChillTemperature(double temp, double speed)
{
    double result{};
    result = 35.74 + 0.6215 * temp - 35.75 * pow(speed, 0.16) + 0.4275 * temp * pow(speed, 0.16);
    return result;
}

// Returns the wind-chill temperature
int main()
{
    // Prompt the user for inputs
    cout << "Enter the temperature in Fahrenheit: ";
    double ambientTempDegF{};
    cin >> ambientTempDegF;

    cout << "Enter the wind speed in miles per hour: ";
    double windSpeedMPH{};
    cin >> windSpeedMPH;

    // Returns thw wind-chill temperature
    double windChillTempDegF{ getWindChillTemperature(ambientTempDegF, windSpeedMPH) };

    // Display the results
    cout << "The wind chill index is " << windChillTempDegF << endl;

    return 0;
}
