#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and cols: ";
    cin >> r >> c;

    int a[50][50], t[50][50];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];

    // Transpose
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            t[j][i] = a[i][j];

    cout << "\nTranspose Matrix:\n";
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++)
            cout << t[i][j] << " ";
        cout << endl;
    }
    return 0;
}
