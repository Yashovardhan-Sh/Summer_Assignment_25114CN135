#include <iostream>
#include <string>

using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool isIssued;
};

Book b[100];
int totalBooks = 0;

void add() {
    cout << "Enter Book ID: ";
    cin >> b[totalBooks].id;
    cin.ignore();
    cout << "Enter Title: ";
    getline(cin, b[totalBooks].title);
    cout << "Enter Author: ";
    getline(cin, b[totalBooks].author);
    b[totalBooks].isIssued = false;
    totalBooks++;
    cout << "Book Added\n";
}

void display() {
    for (int i = 0; i < totalBooks; i++) {
        cout << b[i].id << " | " << b[i].title << " by " << b[i].author 
             << " [" << (b[i].isIssued ? "Issued" : "Available") << "]\n";
    }
}

void search() {
    int si;
    bool f = false;
    cout << "Enter Book ID to search: ";
    cin >> si;
    for (int i = 0; i < totalBooks; i++) {
        if (b[i].id == si) {
            cout << "Found: " << b[i].title << " by " << b[i].author 
                 << " [" << (b[i].isIssued ? "Issued" : "Available") << "]\n";
            f = true;
            break;
        }
    }
    if (!f) cout << "Not found\n";
}

void issueBook() {
    int ci;
    bool f = false;
    cout << "Enter Book ID to issue: ";
    cin >> ci;
    for (int i = 0; i < totalBooks; i++) {
        if (b[i].id == ci) {
            f = true;
            if (b[i].isIssued) {
                cout << "Book is already issued\n";
            } else {
                b[i].isIssued = true;
                cout << "Book Issued Successfully\n";
            }
            break;
        }
    }
    if (!f) cout << "Not found\n";
}

void returnBook() {
    int ri;
    bool f = false;
    cout << "Enter Book ID to return: ";
    cin >> ri;
    for (int i = 0; i < totalBooks; i++) {
        if (b[i].id == ri) {
            f = true;
            if (!b[i].isIssued) {
                cout << "Book was not issued\n";
            } else {
                b[i].isIssued = false;
                cout << "Book Returned Successfully\n";
            }
            break;
        }
    }
    if (!f) cout << "Not found\n";
}

void del() {
    int d;
    bool f = false;
    cout << "Enter Book ID to delete: ";
    cin >> d;
    for (int i = 0; i < totalBooks; i++) {
        if (b[i].id == d) {
            for (int j = i; j < totalBooks - 1; j++) {
                b[j] = b[j + 1];
            }
            totalBooks--;
            f = true;
            cout << "Book Deleted\n";
            break;
        }
    }
    if (!f) cout << "Not found\n";
}

int main() {
    int choice;
    do {
        cout << "\n1. Add Book\n2. Display All\n3. Search Book\n4. Issue Book\n5. Return Book\n6. Delete Book\n7. Exit\nEnter choice: ";
        cin >> choice;
        if (choice == 1) add();
        else if (choice == 2) display();
        else if (choice == 3) search();
        else if (choice == 4) issueBook();
        else if (choice == 5) returnBook();
        else if (choice == 6) del();
    } while (choice != 7);
    return 0;
}
