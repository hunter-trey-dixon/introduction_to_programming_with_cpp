//
// Created by hunter-dixon on 1/17/26.
//
#include <iostream>
#include <numbers>

// Stores an input entered by a user.
double userInput()
{
    double num{};
    std::cin >> num;

    return num;
}

double getArea(double radius)
{
    double area{};
    area = radius * radius * std::numbers::pi_v<double>;

    return area;
}

double getVolume(double area, double length)
{
    double volume{};
    volume = area * length;

    return volume;
}

// Computes the area and volume of a cylinder based on a radius and length provided by the user.
int main()
{
    std::cout << "Enter a radius: ";
    double radius{ userInput() };

    std::cout << "Enter a length: ";
    double length{ userInput() };

    double area{ getArea(radius) };
    double volume{ getVolume(area, length)};

    std::cout << "\tArea:\t " << area << "\n\tVolume:\t " << volume << std::endl;


    return 0;
}