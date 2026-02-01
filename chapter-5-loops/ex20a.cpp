//
// Created by hunter-dixon on 2/1/26.
//
#include <iostream>
using namespace std;

// Display a pattern using nested loops
int main()
{
    cout << "Pattern A" << endl;

    for (int i = 0; i < 6; i++) {
        if (i == 0 || i == 5) {
            cout << "123456" << endl;
        } else {
            cout << "1    6" << endl;
        }
    }

    return 0;
}