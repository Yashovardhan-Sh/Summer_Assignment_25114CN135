#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    char target;
    int frequency = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter the character to count: ";
    cin >> target;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            frequency++;
        }
    }

    cout << "Frequency of '" << target << "': " << frequency << endl;

    return 0;
}
