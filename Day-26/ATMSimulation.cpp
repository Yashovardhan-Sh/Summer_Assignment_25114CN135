#include <iostream>

using namespace std;

int main() {
    double balance = 1000.00;
    int choice = 0;
    double amount = 0.00;

    do {
        cout << "--- ATM MENU ---\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current Balance: $" << balance << "\n\n";
                break;
            case 2:
                cout << "Enter deposit amount: $";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Successfully deposited $" << amount << "\n\n";
                } else {
                    cout << "Invalid amount!\n\n";
                }
                break;
            case 3:
                cout << "Enter withdrawal amount: $";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Successfully withdrew $" << amount << "\n\n";
                } else if (amount > balance) {
                    cout << "Insufficient balance!\n\n";
                } else {
                    cout << "Invalid amount!\n\n";
                }
                break;
            case 4:
                cout << "Thank you for using the ATM. Goodbye!\n";
                break;
            default:
                cout << "Invalid option! Try again.\n\n";
        }
    } while (choice != 4);

    return 0;
}
