#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        freq[ch]++;
    }

    char result = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (freq[ch] == 1) {
            result = str[i];
            break;
        }
    }

    if (result != '\0') {
        cout << "The first non-repeating character is: " << result << endl;
    } else {
        cout << "All characters repeat or the string is empty." << endl;
    }

    return 0;
}
