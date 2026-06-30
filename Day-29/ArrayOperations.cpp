#include <iostream>

using namespace std;

int arr[100];
int total = 0;

void insertElement() {
    int val, pos;
    cout << "Enter value to insert: ";
    cin >> val;
    cout << "Enter position (0 to " << total << "): ";
    cin >> pos;

    if (pos < 0 || pos > total || total >= 100) {
        cout << "Invalid position or array full\n";
        return;
    }

    for (int i = total; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    total++;
    cout << "Inserted\n";
}

void deleteElement() {
    int pos;
    cout << "Enter position to delete (0 to " << total - 1 << "): ";
    cin >> pos;

    if (pos < 0 || pos >= total) {
        cout << "Invalid position\n";
        return;
    }

    for (int i = pos; i < total - 1; i++) {
        arr[i] = arr[i + 1];
    }
    total--;
    cout << "Deleted\n";
}

void display() {
    if (total == 0) {
        cout << "Array is empty\n";
        return;
    }
    for (int i = 0; i < total; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void search() {
    int val;
    bool f = false;
    cout << "Enter value to search: ";
    cin >> val;

    for (int i = 0; i < total; i++) {
        if (arr[i] == val) {
            cout << "Found at index " << i << "\n";
            f = true;
            break;
        }
    }
    if (!f) cout << "Not found\n";
}

int main() {
    int choice;
    cout<<"Array Operator System";
    do {
        cout << "\n1. Insert\n2. Delete\n3. Display\n4. Search\n5. Exit\nEnter choice: ";
        cin >> choice;
        if (choice == 1) insertElement();
        else if (choice == 2) deleteElement();
        else if (choice == 3) display();
        else if (choice == 4) search();
    } while (choice != 5);
    return 0;
}
