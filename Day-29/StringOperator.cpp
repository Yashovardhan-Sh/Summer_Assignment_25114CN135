#include <iostream>
#include <string>

using namespace std;

int main() {
    int choice;
    cout<<"String Operation System";
    string str1, str2;

    do {
        cout << "\n1. Length\n2. Concatenate\n3. Compare\n4. Reverse\n5. Exit\nEnter choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            cout << "Enter string: ";
            getline(cin, str1);
            cout << "Length: " << str1.length() << "\n";
        }
        else if (choice == 2) {
            cout << "Enter first string: ";
            getline(cin, str1);
            cout << "Enter second string: ";
            getline(cin, str2);
            cout << "Combined: " << str1 + str2 << "\n";
        }
        else if (choice == 3) {
            cout << "Enter first string: ";
            getline(cin, str1);
            cout << "Enter second string: ";
            getline(cin, str2);
            if (str1 == str2) {
                cout << "Strings are equal\n";
            } else if (str1 > str2) {
                cout << "First string is greater\n";
            } else {
                cout << "Second string is greater\n";
            }
        }
        else if (choice == 4) {
            cout << "Enter string to reverse: ";
            getline(cin, str1);
            string rev = "";
            for (int i = str1.length() - 1; i >= 0; i--) {
                rev += str1[i];
            }
            cout << "Reversed: " << rev << "\n";
        }
    } while (choice != 5);

    return 0;
}
