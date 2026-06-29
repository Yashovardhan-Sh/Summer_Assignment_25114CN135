#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    int secretNumber = rand() % 100 + 1;
    int userGuess = 0;
    int attempts = 0;

    cout << "Welcome to the Guessing Game!\n";
    cout << "Guess a number between 1 and 100:\n\n";

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess > secretNumber) {
            cout << "Too high!\n\n";
        } else if (userGuess < secretNumber) {
            cout << "Too low!\n\n";
        } else {
            cout << "\nCorrect! You got it in " << attempts << " attempts.\n";
        }
    } while (userGuess != secretNumber);

    return 0;
}
