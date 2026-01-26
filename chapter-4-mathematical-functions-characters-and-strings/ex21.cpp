//
// Created by hunter-dixon on 1/26/26.
//
#include <iostream>
using namespace std;

// Displays a student's major and status
int main()
{
    // Prompt the user to enter two characters
    // Character 1: M for Mathematics, C for CompSci, and I for IT
    // Character 2: 1 for freshman, 2 for sophomore, 3 for junior, and 4 for senior
    cout << "Enter two characters: ";
    string input;
    cin >> input;

    // Check the first character and assign a major
    bool isValidMajorCode = true;
    string major;

    if (input[0] == 'M')
        major = "Mathematics";
    else if (input[0] == 'C')
        major = "Computer Science";
    else if (input[0] == 'I')
        major = "Information Technology";
    else
        isValidMajorCode = false;

    // Check the second character and assign a student year
    bool isValidYearCode = true;
    string studentYear;
    if (input[1] == '1')
        studentYear = "Freshman";
    else if (input[1] == '2')
        studentYear = "Sophomore";
    else if (input[1] == '3')
        studentYear = "Junior";
    else if (input[1] ==  '4')
        studentYear = "Senior";
    else
        isValidYearCode = false;

    if (isValidMajorCode && isValidYearCode)
        cout << major << " " << studentYear << endl;

    if (!isValidMajorCode)
        cout << "Invalid major code" << endl;

    if (!isValidYearCode)
        cout << "Invalid status code" << endl;

    return 0;
}