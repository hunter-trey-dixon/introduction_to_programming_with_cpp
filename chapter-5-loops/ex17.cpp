//
// Created by hunter-dixon on 2/1/26.
//
#include <iostream>
using namespace std;

// Displays the ASCII character table
int main()
{
    char code{65};
    int k{};

    // The loop only displays the uppercase characters with a maximum of five per line
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            cout << static_cast<char>(code + k) << " ";
            k++;
            if (k > 25)
                break;
        }
        cout << endl;
    }

    return 0;
}