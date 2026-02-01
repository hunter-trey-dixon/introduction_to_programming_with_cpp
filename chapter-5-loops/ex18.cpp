//
// Created by hunter-dixon on 2/1/26.
//
#include <iostream>
using namespace std;

// Reads an integer and displays its first five multiples
int main()
{
    // Generate a random number between 0 and 99
    srand(time(0));
    int num = rand() % 100;

    // Displays the first five multiples
    for (int i = 1; i < 6; i++) {
        cout << num * i << " ";
    }

    return 0;
}