#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square matrix (N x N): ";
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n));

    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    int primarySum = 0;
    for (int i = 0; i < n; i++) {
        primarySum += mat[i][i];
    }

    cout << "Sum of diagonal elements : " << primarySum << endl;

    return 0;
}
