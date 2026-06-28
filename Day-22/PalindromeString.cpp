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

    bool isPalindrome = true;

    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = false;
            break; 
        }
        start++;
        end--;
    }

    if (isPalindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
