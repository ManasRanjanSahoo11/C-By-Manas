#include<iostream>
using namespace std;

int main() {
    int n, m, p, q;

    // Input for the first matrix
    cout << "Enter the number of rows for the 1st matrix:" << endl;
    cin >> n;
    cout << "Enter the number of columns for the 1st matrix:" << endl;
    cin >> m;

    int a[n][m];

    cout << "Enter the elements of the 1st matrix:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // Display the first matrix
    cout << "The 1st matrix:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // Input for the second matrix
    cout << "Enter the number of rows for the 2nd matrix:" << endl;
    cin >> p;
    cout << "Enter the number of columns for the 2nd matrix:" << endl;
    cin >> q;

    int b[p][q];

    cout << "Enter the elements of the 2nd matrix:" << endl;
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < q; j++) {
            cin >> b[i][j];
        }
    }

    // Display the second matrix
    cout << "The 2nd matrix:" << endl;
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < q; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    // Matrix multiplication
    if (m != p) {
        cout << "Matrix multiplication is not possible." << endl;
    } else {
        int c[n][q] = {0};  // Initialize result matrix with zeros

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < q; j++) {
                for(int k = 0; k < m; k++) {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        // Display the result matrix
        cout << "Result matrix:" << endl;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < q; j++) {
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
