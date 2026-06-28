#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int start = 0;
    int end = 0;

    while (str[end] != '\0') {
        end++;
    }
    end--;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++;
        end--;
    }

    cout << "Reversed string: " << str << endl;

    return 0;
}
