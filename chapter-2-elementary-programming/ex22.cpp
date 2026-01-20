//
// Created by hunter-dixon on 1/19/26.
//
#include <iostream>
using namespace std;

// Return the interest amount on the next monthly payment
double getInterestAmount(double balance, double APR)
{
    double interest{};
    interest = balance * (APR / 1200);
    return interest;
}

// Computes the interest on the next monthly payment
int main()
{
    // Prompt the user for inputs
    cout << "Enter balance and interest rate (e.g., 3 for 3%): ";
    double balance{};
    cin >> balance;
    double annuralInterestRate{};
    cin >> annuralInterestRate;

    // Calculate the interest on the next monthly payment
    double interestAmount{ getInterestAmount(balance, annuralInterestRate) };

    // Display the results
    cout << "The interest is " << interestAmount << endl;

    return 0;
}