#include <iostream>

using namespace std;

int main() {
    char answer;
    int score = 0;

    cout << "--- QUICK QUIZ GAME ---\n\n";

    cout << "Q1: What is the correct file extension for C++ source files?\n";
    cout << "A. .c\nB. .cpp\nC. .class\nD. .java\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'B' || answer == 'b') {
        cout << "Correct!\n\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is B.\n\n";
    }

    cout << "Q2: Which operator is used for insertion in 'cout'?\n";
    cout << "A. <<\nB. >>\nC. +=\nD. ==\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'A' || answer == 'a') {
        cout << "Correct!\n\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is A.\n\n";
    }

    cout << "Q3: Which loop is guaranteed to execute at least once?\n";
    cout << "A. for\nB. while\nC. do-while\nD. none of the above\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'C' || answer == 'c') {
        cout << "Correct!\n\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is C.\n\n";
    }

    cout << "--- QUIZ OVER ---\n";
    cout << "Your Final Score: " << score << "/3\n";

    return 0;
}
