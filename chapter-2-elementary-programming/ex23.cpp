//
// Created by hunter-dixon on 1/19/26.
//
#include <iostream>
#include <cmath>
using namespace std;

// Return the amount accumulated by interest
double getInvestment(double investment, double APR, int years)
{
    double futureInvestmentValue{};
    futureInvestmentValue = investment * pow(1 + APR / 1200, years * 12);
    return futureInvestmentValue;
}

// Displays the future investment value for an initial investment over a span of time
int main()
{
    // Prompt the user for an input
    cout << "Enter investment amount: ";
    double initialInvestment{};
    cin >> initialInvestment;

    cout << "Enter annual interest rate in percentage: ";
    double annualInterestRate{};
    cin >> annualInterestRate;

    cout << "Enter number of years: ";
    int numYears{};
    cin >> numYears;

    // Calculate the accumulated value
    double futureInvestmentValue{ getInvestment(initialInvestment, annualInterestRate, numYears)};

    //Display the results
    cout << "Accumulated value is $" << static_cast<int>(futureInvestmentValue * 100) / 100.0 << endl;

    return 0;
}