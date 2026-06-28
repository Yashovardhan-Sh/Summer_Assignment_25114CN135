#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string str;
    int vowels = 0;
    int consonants = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    string vowel_list = "aeiouAEIOU";

    for (char c : str) {
        if (isalpha(c)) {
            if (vowel_list.find(c) != string::npos) {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}
