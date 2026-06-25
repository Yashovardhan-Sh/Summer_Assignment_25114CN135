#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxElement = arr[0];
    int maxCount = 0;

    for (int i = 0; i < n; i++) {
        int currentElement = arr[i];
        int currentCount = 0;

        for (int j = 0; j < n; j++) {
            if (arr[j] == currentElement) {
                currentCount++;
            }
        }

        if (currentCount > maxCount) {
            maxCount = currentCount;
            maxElement = currentElement;
        }
    }

    cout << "Element with maximum frequency: " << maxElement << endl;
    cout << "It appeared " << maxCount << " times." << endl;

    return 0;
}
