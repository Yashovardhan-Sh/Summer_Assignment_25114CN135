#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    bool visited = {false};
    int writeIndex = 0;

    for (int readIndex = 0; str[readIndex] != '\0'; readIndex++) {
        unsigned char ch = str[readIndex];

        if (!visited[ch]) {
            visited[ch] = true;
            str[writeIndex] = str[readIndex];
            writeIndex++;
        }
    }

    str[writeIndex] = '\0';

    while (str.length() > writeIndex) {
        str.pop_back();
    }

    cout << "String after removing duplicates: " << str << endl;

    return 0;
}
