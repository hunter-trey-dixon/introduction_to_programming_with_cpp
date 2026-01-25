//
// Created by hunter-dixon on 1/24/26.
//
#include <iostream>
using namespace std;

// Game: rock, paper, scissor
int main()
{
    // Prompts the user to choose rock, paper, or scissor
    cout << "scissor (0), rock (1), paper(2): ";
    int playerChoice{};
    cin >> playerChoice;

    // Initialize the program's default choice to scissor (0)
    int programChoice{};

    // Generate two random integers
    srand(time(0));
    int number1 = rand();
    int number2= rand();

    // Increment a counter for each even integer
    int count{};
    if (number1 % 2)
        count++;
    if (number2 % 2)
        count++;

    // Program is assigned rock, paper, or scissor
    programChoice += count;

    // Display results
    if (playerChoice == 0) {
        if (programChoice == 0) {
            cout << "The computer is scissor. You are scissor. It is a draw.";
        } else if (programChoice == 1) {
            cout << "The computer is rock. You are scissor. You lose.";
        } else {
            cout << "The computer is paper. You are scissor. You won.";
        }
    } else if (playerChoice == 1) {
        if (programChoice == 0) {
            cout << "The computer is scissor. You are rock. You won.";
        } else if (programChoice == 1) {
            cout << "The computer is rock. You are rock. It is a draw.";
        } else {
            cout << "The computer is paper. You are rock. You lose.";
        }
    } else {
        if (programChoice == 0) {
            cout << "The computer is scissor. You are paper. You lose.";
        } else if (programChoice == 1) {
            cout << "The computer is rock. You are paper. You won.";
        } else {
            cout << "The computer is paper. You are paper. It is a draw.";
        }
    }

    cout << endl;

    return 0;
}