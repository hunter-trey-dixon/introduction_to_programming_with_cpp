//
// Created by hunter-dixon on 1/18/26.
//
#include <iostream>
using namespace std;

double getUserInput()
{
    double input{};
    cin >> input;
    return input;
}

// Returns the monthly interest rate
double getMonthlyInterest(double interest)
{
    return 1 + interest;
}

// Prompts the user to enter a monthly saving amount and displays the account value after the sixth month
int main()
{
    // Prompt the user for input
    cout << "Enter the monthly saving amount: ";
    double monthlyAmount{ getUserInput() };

    // Calculate the account balance after six months
    double annualInterestRate = 0.05;
    double monthlyInterestRate = annualInterestRate / 12;
    double balance = monthlyAmount * getMonthlyInterest(monthlyInterestRate);
    balance = (monthlyAmount + balance) * getMonthlyInterest(monthlyInterestRate);
    balance = (monthlyAmount + balance) * getMonthlyInterest(monthlyInterestRate);
    balance = (monthlyAmount + balance) * getMonthlyInterest(monthlyInterestRate);
    balance = (monthlyAmount + balance) * getMonthlyInterest(monthlyInterestRate);
    balance = (monthlyAmount + balance) * getMonthlyInterest(monthlyInterestRate);

    // Display the results
    cout << "After the sixth month, the account value is $" << static_cast<int>(balance * 100) / 100.0 << endl;
    return 0;
}