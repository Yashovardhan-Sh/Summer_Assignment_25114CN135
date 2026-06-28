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

    char maxChar = '\0';
    int maxCount = 0;

    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            maxChar = (char)i;
        }
    }

    if (maxCount > 0) {
        cout << "The maximum occurring character is '" << maxChar 
             << "' with a count of " << maxCount << endl;
    } else {
        cout << "The string is empty." << endl;
    }

    return 0;
}
