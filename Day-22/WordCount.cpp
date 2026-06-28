#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);

    int wordCount = 0;
    bool inWord = false;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            wordCount++;
        }
    }

    cout << "Total number of words: " << wordCount << endl;

    return 0;
}
