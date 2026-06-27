#include <iostream>
#include <vector>

using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> result;
    for (int i = 0; i < nums1.size(); i++) {
        for (int j = 0; j < nums2.size(); j++) {
            if (nums1[i] == nums2[j]) {
                bool exists = false;
                for (int k = 0; k < result.size(); k++) {
                    if (result[k] == nums1[i]) {
                        exists = true;
                        break;
                    }
                }
                if (!exists) {
                    result.push_back(nums1[i]);
                }
                break;
            }
        }
    }
    return result;
}

int main() {
    int n1, n2;
    
    cout << "Enter the size of the first array: ";
    cin >> n1;
    vector<int> arr1(n1);
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    
    cout << "Enter the size of the second array: ";
    cin >> n2;
    vector<int> arr2(n2);
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }
    
    vector<int> res = intersection(arr1, arr2);
    cout << "Intersection of the two arrays: ";
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    
    return 0;
}
