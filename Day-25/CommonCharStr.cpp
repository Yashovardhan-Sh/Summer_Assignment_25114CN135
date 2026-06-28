#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    bool presentInStr1[256] = {false};
    bool alreadyPrinted[256] = {false};

    for (int i = 0; str1[i] != '\0'; i++) {
        unsigned char ch = str1[i];
        presentInStr1[ch] = true;
    }

    cout << "Common characters: ";
    bool found = false;

    for (int i = 0; str2[i] != '\0'; i++) {
        unsigned char ch = str2[i];

        if (presentInStr1[ch] && !alreadyPrinted[ch]) {
            cout << str2[i] << " ";
            alreadyPrinted[ch] = true;
            found = true;
        }
    }

    if (!found) {
        cout << "None";
    }
    cout << endl;

    return 0;
}
