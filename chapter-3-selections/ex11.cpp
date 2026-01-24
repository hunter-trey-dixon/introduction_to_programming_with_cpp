//
// Created by hunter-dixon on 1/24/26.
//
#include <iostream>
using namespace std;

// Display the loan interest rate to the user
void outputLoanInterestRate(double interestRate)
{
    cout << "Loan Interest Rate: " << interestRate << endl;
}

// Displays the loan interest rate for a particular loan amount
int main()
{
    // Prompts the user to enter the amount of a loan in dollars
    cout << "Enter the loan amount (USD): ";
    int  amountInUSD;
    cin >> amountInUSD;

    // Convert the loan amount from USD to lakhs of USD
    const double LAKHS_USD = 0.00001;
    double amountInLakhsUSD = amountInUSD *LAKHS_USD;

    // Calculates the rate of interest (in percentage)
    if ((0.1 < amountInLakhsUSD) && (amountInLakhsUSD <= 1)) {
        double rateOfInterestInPercent = 15;
        outputLoanInterestRate(rateOfInterestInPercent);
    } else if ((1 < amountInLakhsUSD) && (amountInLakhsUSD <= 5)) {
        double rateOfInterestInPercent = 13.5;
        outputLoanInterestRate(rateOfInterestInPercent);
    } else if ((5 < amountInLakhsUSD) && (amountInLakhsUSD <= 10)) {
        double rateOfInterestInPercent = 12.5;
        outputLoanInterestRate(rateOfInterestInPercent);
    } else if ((10 < amountInLakhsUSD) && (amountInLakhsUSD <= 50)) {
        double rateOfInterestInPercent = 11.0;
        outputLoanInterestRate(rateOfInterestInPercent);
    } else {
        cout << "Loan cannot be provided." << endl;
    }

    return 0;
}