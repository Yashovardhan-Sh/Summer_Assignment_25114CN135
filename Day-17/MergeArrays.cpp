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

    int n3 = n1 + n2;
    int mergedArr[n3];

    for (int i = 0; i < n1; i++) {
        mergedArr[i] = arr1[i];
    }

    for (int i = 0; i < n2; i++) {
        mergedArr[n1 + i] = arr2[i];
    }

    cout << "Merged array: ";
    for (int i = 0; i < n3; i++) {
        cout << mergedArr[i] << " ";
    }
    cout << endl;

    return 0;
}
