#include <iostream>
#include <vector>

using namespace std;

int main() {
    int r1, c1, r2, c2;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }

    vector<vector<int>> mat1(r1, vector<int>(c1));
    vector<vector<int>> mat2(r2, vector<int>(c2));
    vector<vector<int>> product(r1, vector<int>(c2, 0));

    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> mat2[i][j];
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << "Resultant Matrix after multiplication:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
