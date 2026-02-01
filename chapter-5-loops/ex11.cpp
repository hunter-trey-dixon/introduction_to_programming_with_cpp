//
// Created by hunter-dixon on 1/31/26.
//
#include <cfloat>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

// Finds the two lowest prices from a number of items provided by the user
int main()
{
    // Prompts the user to enter the number of items
    cout << "Enter the number of items: ";
    int numItems{};
    cin >> numItems;

    // These variables will be used to store the desired item names and prices
    string itemName1{};
    string itemName2{};
    double itemPrice1{ DBL_MAX };   // Initialize the variables prices to an outrageously high price
    double itemPrice2{ DBL_MAX };

    // Allows the user to enter multiple item names and their associated prices
    for (int i = 0; i < numItems; i++) {
        cout << "Enter the item's name: ";
        string itemName{};
        getline(cin >> ws, itemName, '\n');

        cout << "Enter the item's price: ";
        double itemPrice{};
        cin >> itemPrice;

        // Updates the item names and their associated price to ensure the two cheapest items are known
        double swapPrice{};
        string swapName{};
        if (itemPrice < itemPrice1) {
            swapPrice = itemPrice1;
            swapName = itemName1;
            itemPrice1 = itemPrice;
            itemName1 = itemName;
            itemPrice2 = swapPrice;
            itemName2 = swapName;
        }
    }

    cout << fixed << setprecision(2)
         << "Item Name: " << itemName1 << " \tItem Price: $" << itemPrice1 << endl;
    cout << "Item Name: " << itemName2 << " \tItem Price: $" << itemPrice2 << endl;

    return 0;
}