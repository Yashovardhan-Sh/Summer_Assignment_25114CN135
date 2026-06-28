#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cout << "How many names do you want to sort? ";
    cin >> n;
    cin.ignore(); 

    string names[100];

    for (int i = 0; i < n; i++) {
        cout << "Enter name " << i + 1 << ": ";
        getline(cin, names[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            
            int k = 0;
            bool swapNeeded = false;
            
            while (names[j][k] != '\0' && names[j + 1][k] != '\0') {
                if (names[j][k] > names[j + 1][k]) {
                    swapNeeded = true;
                    break;
                } else if (names[j][k] < names[j + 1][k]) {
                    break;
                }
                k++;
            }
            if (!swapNeeded && names[j][k] != '\0' && names[j + 1][k] == '\0') {
                swapNeeded = true;
            }

            if (swapNeeded) {
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    cout << "\nNames in alphabetical order:\n";
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    return 0;
}
