//
// Created by hunter-dixon on 2/1/26.
//
#include <iostream>
using namespace std;

// Computes the greatest common divisor
int main()
{
    // Prompt the user to enter two positive integers
    cout << "Enter first integer: ";
    int int1{};
    cin >> int1;

    cout << "Enter second integer: ";
    int int2{};
    cin >> int2;

    // The divisor, used for determining the GCD, is the minimum of the two positive integers entered by the user
    int divisor{};
    if (int1 < int2)
        divisor = int1;
    else
        divisor = int2;

    // The first common divisor in which there is no remainder for int1 and int2 is the GCD.
    bool isGCD = false;
    int gcd{};
    int i{};
    while (!isGCD) {
        if ((int1 % (divisor - i) == 0) && ((int2 % (divisor - i) == 0))) {
            gcd = divisor - i;
            isGCD = true;
        }
        i++;
    }

    cout << "The GCD of " << int1 << " and " << int2 << " is " << gcd << endl;

    return 0;
}