//
// Created by hunter-dixon on 1/31/26.
//
#include <iostream>
using namespace std;

// Count positive and negative numbers and compute the average of numbers
int main() {
    // Initialize variables
    int sum{};
    int input{};
    int posCount{};
    int negCount{};

    // Loop reads an unspecified number of integers and determines how many values have been read,...
    // ... and computes the total and average of the input values (not counting zeros)
    bool isValidInput = true;
    while (isValidInput) {
        cout << "Enter an integer, the input ends if it is 0: ";
        cout << endl;
        cin >> input;

        if (input == 0) {
            isValidInput = false;
        } else if (input > 0){
            posCount++;
        } else {
            negCount++;
        }
        sum += input;
    }

    // Displays an output based on the integers provided by the user
    if ((posCount + negCount) == 0) {
        cout << "No numbers are entered except " << input << endl;
    } else {
        cout << "The number of positives is " << posCount << endl;
        cout << "The number of negatives is " << negCount << endl;
        cout << "The total is " << sum << endl;
        cout << "The average is " << sum / (posCount + negCount * 1.0) << endl;
    }

    return 0;
}