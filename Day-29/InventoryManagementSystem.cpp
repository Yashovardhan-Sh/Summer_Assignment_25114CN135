#include <iostream>
#include <string>

using namespace std;

struct Item {
    int id;
    string name;
    int qty;
    int price;
};

Item inv[100];
int totalItems = 0;

void add() {
    cout << "Enter Item ID: ";
    cin >> inv[totalItems].id;
    cin.ignore();
    cout << "Enter Item Name: ";
    getline(cin, inv[totalItems].name);
    cout << "Enter Quantity: ";
    cin >> inv[totalItems].qty;
    cout << "Enter Price: ";
    cin >> inv[totalItems].price;
    totalItems++;
    cout << "Item Added\n";
}

void display() {
    for (int i = 0; i < totalItems; i++) {
        cout << inv[i].id << " | " << inv[i].name << " | Qty: " << inv[i].qty << " | Price: " << inv[i].price << "\n";
    }
}

void search() {
    int si;
    bool f = false;
    cout << "Enter Item ID to search: ";
    cin >> si;
    for (int i = 0; i < totalItems; i++) {
        if (inv[i].id == si) {
            cout << "Found: " << inv[i].name << " | Qty: " << inv[i].qty << " | Price: " << inv[i].price << "\n";
            f = true;
            break;
        }
    }
    if (!f) cout << "Not found\n";
}

void del() {
    int d;
    bool f = false;
    cout << "Enter Item ID to delete: ";
    cin >> d;
    for (int i = 0; i < totalItems; i++) {
        if (inv[i].id == d) {
            for (int j = i; j < totalItems - 1; j++) {
                inv[j] = inv[j + 1];
            }
            totalItems--;
            f = true;
            cout << "Item Deleted\n";
            break;
        }
    }
    if (!f) cout << "Not found\n";
}

void update() {
    int u;
    bool f = false;
    cout << "Enter Item ID to update: ";
    cin >> u;
    for (int i = 0; i < totalItems; i++) {
        if (inv[i].id == u) {
            cout << "Enter New Quantity: ";
            cin >> inv[i].qty;
            cout << "Enter New Price: ";
            cin >> inv[i].price;
            f = true;
            cout << "Item Updated\n";
            break;
        }
    }
    if (!f) cout << "Not found\n";
}

int main() {
    int choice;
    cout<<"Inventory Manager";
    do {
        cout << "\n1. Add Item\n2. Display All\n3. Search Item\n4. Delete Item\n5. Update Item\n6. Exit\nEnter choice: ";
        cin >> choice;
        if (choice == 1) add();
        else if (choice == 2) display();
        else if (choice == 3) search();
        else if (choice == 4) del();
        else if (choice == 5) update();
    } while (choice != 6);
    return 0;
}
