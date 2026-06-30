#include <iostream>
#include <string>

using namespace std;

struct Account {
    int accNum;
    string name;
    int balance;
};

Account a[100];
int totalAccounts = 0;

void add() {
    cout << "Enter Account Number: ";
    cin >> a[totalAccounts].accNum;
    cin.ignore();
    cout << "Enter Holder Name: ";
    getline(cin, a[totalAccounts].name);
    cout << "Enter Initial Balance: ";
    cin >> a[totalAccounts].balance;
    totalAccounts++;
    cout << "Account Created Successfully\n";
}

void display() {
    for (int i = 0; i < totalAccounts; i++) {
        cout << a[i].accNum << " | " << a[i].name << " | Balance: " << a[i].balance << "\n";
    }
}

void deposit() {
    int ac, amt;
    bool f = false;
    cout << "Enter Account Number: ";
    cin >> ac;
    for (int i = 0; i < totalAccounts; i++) {
        if (a[i].accNum == ac) {
            cout << "Enter Deposit Amount: ";
            cin >> amt;
            a[i].balance += amt;
            cout << "Deposited. New Balance: " << a[i].balance << "\n";
            f = true;
            break;
        }
    }
    if (!f) cout << "Account not found\n";
}

void withdraw() {
    int ac, amt;
    bool f = false;
    cout << "Enter Account Number: ";
    cin >> ac;
    for (int i = 0; i < totalAccounts; i++) {
        if (a[i].accNum == ac) {
            cout << "Enter Withdrawal Amount: ";
            cin >> amt;
            if (amt > a[i].balance) {
                cout << "Insufficient balance\n";
            } else {
                a[i].balance -= amt;
                cout << "Withdrawn. New Balance: " << a[i].balance << "\n";
            }
            f = true;
            break;
        }
    }
    if (!f) cout << "Account not found\n";
}

void search() {
    int ac;
    bool f = false;
    cout << "Enter Account Number to search: ";
    cin >> ac;
    for (int i = 0; i < totalAccounts; i++) {
        if (a[i].accNum == ac) {
            cout << "Found: " << a[i].name << " | Balance: " << a[i].balance << "\n";
            f = true;
            break;
        }
    }
    if (!f) cout << "Account not found\n";
}

int main() {
    int choice;
    do {
        cout << "\n1. Create Account\n2. Display All\n3. Deposit\n4. Withdraw\n5. Search\n6. Exit\nEnter choice: ";
        cin >> choice;
        if (choice == 1) add();
        else if (choice == 2) display();
        else if (choice == 3) deposit();
        else if (choice == 4) withdraw();
        else if (choice == 5) search();
    } while (choice != 6);
    return 0;
}
