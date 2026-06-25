#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter " << n1 << " elements: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter " << n2 << " elements: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int unionArr[n1 + n2];
    int unionSize = 0;

    for (int i = 0; i < n1; i++) {
        bool alreadyPresent = false;
        for (int j = 0; j < unionSize; j++) {
            if (arr1[i] == unionArr[j]) {
                alreadyPresent = true;
                break;
            }
        }
        if (!alreadyPresent) {
            unionArr[unionSize] = arr1[i];
            unionSize++;
        }
    }

    for (int i = 0; i < n2; i++) {
        bool alreadyPresent = false;
        for (int j = 0; j < unionSize; j++) {
            if (arr2[i] == unionArr[j]) {
                alreadyPresent = true;
                break;
            }
        }
        if (!alreadyPresent) {
            unionArr[unionSize] = arr2[i];
            unionSize++;
        }
    }

    cout << "Union of arrays: ";
    for (int i = 0; i < unionSize; i++) {
        cout << unionArr[i] << " ";
    }
    cout << endl;

    return 0;
}
