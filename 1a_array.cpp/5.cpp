#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and cols: ";
    cin >> r >> c;
    int A[r][c];

    cout << "Enter matrix: ";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) cin >> A[i][j];

    // Row sum
    for (int i = 0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++) sum += A[i][j];
        cout << "Sum of Row " << i + 1 << " = " << sum << endl;
    }

    // Column sum
    for (int j = 0; j < c; j++) {
        int sum = 0;
        for (int i = 0; i < r; i++) sum += A[i][j];
        cout << "Sum of Col " << j + 1 << " = " << sum << endl;
    }

    return 0;
}
