#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and cols: ";
    cin >> r >> c;

    int a[50][50], b[50][50], sum[50][50];

    cout << "Enter first matrix:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];

    cout << "Enter second matrix:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> b[i][j];

    // Addition
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            sum[i][j] = a[i][j] + b[i][j];

    cout << "\nSum of Matrices:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }
    return 0;
}
