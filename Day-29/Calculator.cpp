#include <iostream>

using namespace std;

int main() {
    int choice;
    double num1, num2;

    do {
        cout << "\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\nEnter choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }

        if (choice == 1) {
            cout << "Result: " << num1 + num2 << "\n";
        }
        else if (choice == 2) {
            cout << "Result: " << num1 - num2 << "\n";
        }
        else if (choice == 3) {
            cout << "Result: " << num1 * num2 << "\n";
        }
        else if (choice == 4) {
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << "\n";
            } else {
                cout << "Error: Division by zero\n";
            }
        }
    } while (choice != 5);

    return 0;
}
