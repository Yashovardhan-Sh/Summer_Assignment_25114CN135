#include <iostream>
#include <string>

using namespace std;

struct Employee {
    int id;
    string name;
    int salary;
};

Employee e[100];
int total = 0;

void add() {
    cout << "Enter ID: ";
    cin >> e[total].id;
    cout << "Enter Name: ";
    cin >> e[total].name;
    cout << "Enter Salary: ";
    cin >> e[total].salary;
    total++;
}

void display() {
    for (int i = 0; i < total; i++) {
        cout << e[i].id << " " << e[i].name << " " << e[i].salary << "\n";
    }
}

void search() {
    int si;
    bool f = false;
    cout << "Enter ID to search: ";
    cin >> si;
    for (int i = 0; i < total; i++) {
        if (e[i].id == si) {
            cout << "Found: " << e[i].name << " " << e[i].salary << "\n";
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

void update() {
    int u;
    bool f = false;
    cout << "Enter ID to update: ";
    cin >> u;
    for (int i = 0; i < total; i++) {
        if (e[i].id == u) {
            cout << "Enter New Name: ";
            cin >> e[i].name;
            cout << "Enter New Salary: ";
            cin >> e[i].salary;
            f = true;
            cout << "Updated\n";
            break;
        }
    }
    if (!f) cout << "Not found\n";
}

int main() {
    int choice;
    cout<<"Employee Management System";
    do {
        cout << "\n1. Add\n2. Display\n3. Search\n4. Delete\n5. Update\n6. Exit\nEnter choice: ";
        cin >> choice;
        if (choice == 1) add();
        else if (choice == 2) display();
        else if (choice == 3) search();
        else if (choice == 4) del();
        else if (choice == 5) update();
    } while (choice != 6);
    return 0;
}
