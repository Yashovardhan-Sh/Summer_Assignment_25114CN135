#include <iostream>
#include <string>

using namespace std;

struct Student {
    int roll;
    string name;
    int age;
};

Student s[100];
int total = 0;

void add() {
    cout << "Enter Roll: ";
    cin >> s[total].roll;
    cout << "Enter Name: ";
    cin >> s[total].name;
    cout << "Enter Age: ";
    cin >> s[total].age;
    total++;
}

void display() {
    for (int i = 0; i < total; i++) {
        cout << s[i].roll << " " << s[i].name << " " << s[i].age << "\n";
    }
}

void search() {
    int sr;
    bool f = false;
    cout << "Enter Roll to search: ";
    cin >> sr;
    for (int i = 0; i < total; i++) {
        if (s[i].roll == sr) {
            cout << "Found: " << s[i].name << " " << s[i].age << "\n";
            f = true;
            break;
        }
    }
    if (!f) cout << "Not found\n";
}

void del() {
    int d;
    bool f = false;
    cout << "Enter Roll to delete: ";
    cin >> d;
    for (int i = 0; i < total; i++) {
        if (s[i].roll == d) {
            for (int j = i; j < total - 1; j++) {
                s[j] = s[j + 1];
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
    cout << "Enter Roll to update: ";
    cin >> u;
    for (int i = 0; i < total; i++) {
        if (s[i].roll == u) {
            cout << "Enter New Name: ";
            cin >> s[i].name;
            cout << "Enter New Age: ";
            cin >> s[i].age;
            f = true;
            cout << "Updated\n";
            break;
        }
    }
    if (!f) cout << "Not found\n";
}

int main() {
    int choice;
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
