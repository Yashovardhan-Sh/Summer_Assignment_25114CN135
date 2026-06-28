#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string words[100];
    int wordLengths[100] = {0};
    int wordCount = 0;

    int start = 0;
    int length = 0;

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] != ' ' && sentence[i] != '\t' && sentence[i] != '\n') {
            if (length == 0) {
                start = i;
            }
            length++;
        } else {
            if (length > 0) {

                string currentWord = "";
                for (int j = 0; j < length; j++) {
                    currentWord += sentence[start + j];
                }
                words[wordCount] = currentWord;
                wordLengths[wordCount] = length;
                wordCount++;
                length = 0;
            }
        }
    }

    if (length > 0) {
        string currentWord = "";
        for (int j = 0; j < length; j++) {
            currentWord += sentence[start + j];
        }
        words[wordCount] = currentWord;
        wordLengths[wordCount] = length;
        wordCount++;
    }

    for (int i = 0; i < wordCount - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < wordCount; j++) {
            if (wordLengths[j] < wordLengths[minIndex]) {
                minIndex = j;
            }
        }
        int tempLength = wordLengths[i];
        wordLengths[i] = wordLengths[minIndex];
        wordLengths[minIndex] = tempLength;


        string tempWord = words[i];
        words[i] = words[minIndex];
        words[minIndex] = tempWord;
    }

    cout << "\nWords sorted by length:\n";
    for (int i = 0; i < wordCount; i++) {
        cout << words[i] << " (Length: " << wordLengths[i] << ")\n";
    }

    return 0;
}
