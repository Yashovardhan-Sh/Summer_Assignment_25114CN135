#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;
    
    cout << "Enter first string: ";
    getline(cin, str1);
    
    cout << "Enter second string: ";
    getline(cin, str2);

    int freq[256] = {0};
    bool isAnagram = true;

    for (int i = 0; str1[i] != '\0'; i++) {
        unsigned char ch = str1[i];
        freq[ch]++;
    }

    for (int i = 0; str2[i] != '\0'; i++) {
        unsigned char ch = str2[i];
        freq[ch]--;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            isAnagram = false;
            break;
        }
    }

    if (isAnagram) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}
