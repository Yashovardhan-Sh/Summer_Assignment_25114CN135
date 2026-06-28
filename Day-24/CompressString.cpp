#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter a string to compress: ";
    getline(cin, str);

    string compressed = "";
    int count = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == str[i + 1]) {
            count++;
        } else {
            compressed += str[i];
            
            int tempCount = count;
            string digits = "";
            while (tempCount > 0) {
                digits = (char)('0' + (tempCount % 10)) + digits;
                tempCount /= 10;
            }
            compressed += digits;
            
            count = 1;
        }
    }

    if (compressed.length() < str.length()) {
        cout << "Compressed string: " << compressed << endl;
    } else {
        cout << "Compressed string: " << str << endl;
    }

    return 0;
}
