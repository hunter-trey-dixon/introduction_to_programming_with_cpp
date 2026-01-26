//
// Created by hunter-dixon on 1/26/26.
//
#include <iostream>
#include <cmath>
using namespace std;

// Geometry: great circle distance
int main()
{
    // Prompt the user to enter the latitude and longitude of two points on Earth in degrees
    cout << "Enter point 1 (latitude and longitude) in degrees: ";
    double latitude1{};
    double longitude1{};
    cin >> latitude1;
    cin >> longitude1;

    cout << "Enter point 2 (latitude and longitude) in degrees: ";
    double latitude2{};
    double longitude2{};
    cin >> latitude2;
    cin >> longitude2;

    // Convert the coordinates from degrees to radians
    const double DEG_TO_RADS = 0.0174533;
    latitude1 = latitude1 * DEG_TO_RADS;
    latitude2 = latitude2 * DEG_TO_RADS;
    longitude1 = longitude1 * DEG_TO_RADS;
    longitude2 = longitude2 * DEG_TO_RADS;

    // Calculate the great circe distance between the two points
    const double AVG_EARTH_RADIUS_KM = 6378.1;

    double distance{};
    distance = AVG_EARTH_RADIUS_KM *
        acos(sin(latitude1) * sin(latitude2) + cos(latitude1) * cos(latitude2) * cos(longitude1 - longitude2));

    // Display the results
    cout << "The distance between the two points is " << distance << " km" << endl;

    return 0;
}
