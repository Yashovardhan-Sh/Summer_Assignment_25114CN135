#include <iostream>
#include <string>

using namespace std;

struct Employee {
    int id;
    string name;
    int baseSalary;
    int bonus;
    int totalSalary;
};

Employee e[100];
int total = 0;

void add() {
    cout << "Enter ID: ";
    cin >> e[total].id;
    cout << "Enter Name: ";
    cin >> e[total].name;
    cout << "Enter Base Salary: ";
    cin >> e[total].baseSalary;
    cout << "Enter Bonus: ";
    cin >> e[total].bonus;
    e[total].totalSalary = e[total].baseSalary + e[total].bonus;
    total++;
}

void display() {
    for (int i = 0; i < total; i++) {
        cout << e[i].id << " " << e[i].name << " Base: " << e[i].baseSalary << " Bonus: " << e[i].bonus << " Total: " << e[i].totalSalary << "\n";
    }
}

void search() {
    int si;
    bool f = false;
    cout << "Enter ID to search: ";
    cin >> si;
    for (int i = 0; i < total; i++) {
        if (e[i].id == si) {
            cout << "Found: " << e[i].name << " Total Salary: " << e[i].totalSalary << "\n";
            f = true;
            break;
        }
    }
    if (!f) cout << "Not found\n";
}

void del() {
    int d;
    bool f = false;
    cout << "Enter ID to delete: ";
    cin >> d;
    for (int i = 0; i < total; i++) {
        if (e[i].id == d) {
            for (int j = i; j < total - 1; j++) {
                e[j] = e[j + 1];
            }
            total--;
            f = true;
            cout << "Deleted\n";
            break;
        }
    }
    if (!f) cout << "Not found\n";
}

void updateSalary() {
    int u;
    bool f = false;
    cout << "Enter ID to update salary: ";
    cin >> u;
    for (int i = 0; i < total; i++) {
        if (e[i].id == u) {
            cout << "Enter New Base Salary: ";
            cin >> e[i].baseSalary;
            cout << "Enter New Bonus: ";
            cin >> e[i].bonus;
            e[i].totalSalary = e[i].baseSalary + e[i].bonus;
            f = true;
            cout << "Salary Updated\n";
            break;
        }
    }
    if (!f) cout << "Not found\n";
}

int main() {
    int choice;
    cout<<"Salary Management System";
    do {
        cout << "\n1. Add Employee & Salary\n2. Display All\n3. Search Salary\n4. Delete Employee\n5. Update Salary\n6. Exit\nEnter choice: ";
        cin >> choice;
        if (choice == 1) add();
        else if (choice == 2) display();
        else if (choice == 3) search();
        else if (choice == 4) del();
        else if (choice == 5) updateSalary();
    } while (choice != 6);
    return 0;
}
