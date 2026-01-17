//
// Created by hunter-dixon on 1/17/26.
//
#include <iostream>

double getUserInput()
{
    double input{};
    std::cin >> input;
    return input;
}

double getGratuity(double subtotal,double gratuityRate)
{
    double gratuity{};
    gratuity = subtotal * (gratuityRate / 100.0);
    return gratuity;
}

double getTotal(double subtotal, double gratuity)
{
    double total{};
    total = subtotal + gratuity;
    return total;
}

int main()
{
    std::cout << "Enter the subtotal and a gratuity rate: ";
    double subtotal{ getUserInput() };
    double gratuityRate{ getUserInput() };

    // Compute the gratuity
    double gratuity{ getGratuity(subtotal, gratuityRate) };

    // Compute the total
    double total{ getTotal(subtotal, gratuity) };

    std::cout << "The gratuity is $" << gratuity << " and total is $" << total << std::endl;

    return 0;
}