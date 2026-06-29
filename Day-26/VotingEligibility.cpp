#include <iostream>

using namespace std;

int main() {
    int age = 0;
    const int VOTING_AGE = 18;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= VOTING_AGE) {
        cout << "You are eligible to vote!\n";
    } else {
        int yearsLeft = VOTING_AGE - age;
        cout << "You are not eligible to vote yet.\n";
        cout << "You need to wait " << yearsLeft << " more year(s).\n";
    }

    return 0;
}
