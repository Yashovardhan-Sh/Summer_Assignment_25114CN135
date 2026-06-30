#include <iostream>
#include <string>

using namespace std;

struct Contact {
    string name;
    string phone;
    string email;
};

Contact c[100];
int totalContacts = 0;

void add() {
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, c[totalContacts].name);
    cout << "Enter Phone: ";
    getline(cin, c[totalContacts].phone);
    cout << "Enter Email: ";
    getline(cin, c[totalContacts].email);
    totalContacts++;
    cout << "Contact Saved\n";
}

void display() {
    for (int i = 0; i < totalContacts; i++) {
        cout << i + 1 << ". Name: " << c[i].name << " | Phone: " << c[i].phone << " | Email: " << c[i].email << "\n";
    }
}

void search() {
    string sn;
    bool f = false;
    cin.ignore();
    cout << "Enter Name to search: ";
    getline(cin, sn);
    for (int i = 0; i < totalContacts; i++) {
        if (c[i].name == sn) {
            cout << "Found -> Phone: " << c[i].phone << " | Email: " << c[i].email << "\n";
            f = true;
            break;
        }
    }
    if (!f) cout << "Contact not found\n";
}

void del() {
    string dn;
    bool f = false;
    cin.ignore();
    cout << "Enter Name to delete: ";
    getline(cin, dn);
    for (int i = 0; i < totalContacts; i++) {
        if (c[i].name == dn) {
            for (int j = i; j < totalContacts - 1; j++) {
                c[j] = c[j + 1];
            }
            totalContacts--;
            f = true;
            cout << "Contact Deleted\n";
            break;
        }
    }
    if (!f) cout << "Contact not found\n";
}

void update() {
    string un;
    bool f = false;
    cin.ignore();
    cout << "Enter Name to update: ";
    getline(cin, un);
    for (int i = 0; i < totalContacts; i++) {
        if (c[i].name == un) {
            cout << "Enter New Phone: ";
            getline(cin, c[i].phone);
            cout << "Enter New Email: ";
            getline(cin, c[i].email);
            f = true;
            cout << "Contact Updated\n";
            break;
        }
    }
    if (!f) cout << "Contact not found\n";
}

int main() {
    int choice;
    do {
        cout << "\n1. Add Contact\n2. Display All\n3. Search Contact\n4. Delete Contact\n5. Update Contact\n6. Exit\nEnter choice: ";
        cin >> choice;
        if (choice == 1) add();
        else if (choice == 2) display();
        else if (choice == 3) search();
        else if (choice == 4) del();
        else if (choice == 5) update();
    } while (choice != 6);
    return 0;
}
