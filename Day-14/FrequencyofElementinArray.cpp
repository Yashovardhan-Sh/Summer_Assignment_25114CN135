#include <iostream>
using namespace std;

int countFrequency(int arr[], int size, int target) {
    int count = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}
int main() {
    int n, target;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to find its frequency: ";
    cin >> target;

    int frequency = countFrequency(arr, n, target);
    cout << "The element " << target << " appears " << frequency << " time(s)." << endl;
    return 0;
}
