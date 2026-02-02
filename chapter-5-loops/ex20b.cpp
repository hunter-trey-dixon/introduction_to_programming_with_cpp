//
// Created by hunter-dixon on 2/1/26.
//
#include <iostream>
using namespace std;

int main() {
    cout << "Program B" << endl;

    int totalRows = 5;

    // Outer loop that controls the rows
    for (int i = 1; i <= totalRows; i++) {

        // First inner loop that controls the empty space on each row
        for (int j = 0; j <= (totalRows - i); j++) {
            cout << "  ";
        }

        // Second inner loop that outputs the numbers after the empty space on each row
        for (int k = 1; k <= (2 * i) - 1; k++) {
            cout << k << " ";
        }

        cout << endl;
    }

    return 0;
}