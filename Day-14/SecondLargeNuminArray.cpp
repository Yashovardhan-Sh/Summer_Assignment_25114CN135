#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int secLargest = arr[1];

    if (secLargest > largest) {
        int temp = largest;
        largest = secLargest;
        secLargest = temp;
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > largest) {
            secLargest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > secLargest) {
            secLargest = arr[i];
        }
    }
    cout << "Second largest is: " << secLargest << endl;
    return 0;
}
