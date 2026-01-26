//
// Created by hunter-dixon on 1/26/26.
//
#include <iostream>
using namespace std;

// Generate random strings with six lower case letters
int main()
{
    // Initialize an empty string object
    string randomString;

    // Generate a random lowercase character
    srand(time(0));
    char randomChar1 = 97 + rand() % 26;
    char randomChar2 = 97 + rand() % 26;
    char randomChar3 = 97 + rand() % 26;
    char randomChar4 = 97 + rand() % 26;
    char randomChar5 = 97 + rand() % 26;
    char randomChar6 = 97 + rand() % 26;

    // Generate a string with six random lowercase letters
    randomString += randomChar1;
    randomString += randomChar2;
    randomString += randomChar3;
    randomString += randomChar4;
    randomString += randomChar5;
    randomString += randomChar6;

    cout << randomString << endl;

    return 0;
}