#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);

    int currentStart = 0;
    int currentLength = 0;
    
    int maxStart = 0;
    int maxLength = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (currentLength == 0) {
                currentStart = i;
            }
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                maxStart = currentStart;
            }
            currentLength = 0;
        }
    }

    if (currentLength > maxLength) {
        maxLength = currentLength;
        maxStart = currentStart;
    }

    cout << "The longest word is: ";
    for (int i = 0; i < maxLength; i++) {
        cout << str[maxStart + i];
    }
    cout << " (Length: " << maxLength << ")" << endl;

    return 0;
}
