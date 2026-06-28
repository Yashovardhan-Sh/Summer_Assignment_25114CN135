#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    int len1 = 0;
    while (str1[len1] != '\0') len1++;

    int len2 = 0;
    while (str2[len2] != '\0') len2++;

    bool isRotation = false;

    if (len1 == len2 && len1 > 0) {
        string combined = str1 + str1;
        
        if (combined.find(str2) != string::npos) {
            isRotation = true;
        }
    }

    if (isRotation) {
        cout << "The strings are rotations of each other." << endl;
    } else {
        cout << "The strings are not rotations of each other." << endl;
    }

    return 0;
}
