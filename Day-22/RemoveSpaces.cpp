#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int writeIndex = 0;

    for (int readIndex = 0; str[readIndex] != '\0'; readIndex++) {
        if (str[readIndex] != ' ' && str[readIndex] != '\t') {
            str[writeIndex] = str[readIndex];
            writeIndex++;
        }
    }
    
    str[writeIndex] = '\0';
    
    while (str.length() > writeIndex) {
        str.pop_back();
    }

    cout << "String without spaces: " << str << endl;

    return 0;
}
