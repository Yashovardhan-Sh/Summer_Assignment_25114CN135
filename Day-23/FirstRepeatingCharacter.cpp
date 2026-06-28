#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    bool visited[256] = {false};
    char result = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];

        if (visited[ch]) {
            result = str[i];
            break; 
        }
        
        visited[ch] = true;
    }

    if (result != '\0') {
        cout << "The first repeating character is: " << result << endl;
    } else {
        cout << "No repeating characters found." << endl;
    }

    return 0;
}
