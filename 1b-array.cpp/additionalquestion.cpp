#include <iostream>
using namespace std;

#define MAX 20   // maximum non-zero elements

// Structure to store a sparse matrix
struct Sparse {
    int row, col, val;
};

// Function to read sparse matrix
void readSparse(Sparse mat[], int &m, int &n, int &num) {
    cout << "Enter number of rows and columns: ";
    cin >> m >> n;
    cout << "Enter number of non-zero elements: ";
    cin >> num;

    mat[0].row = m;
    mat[0].col = n;
    mat[0].val = num;

    cout << "Enter row, column and value:\n";
    for (int i = 1; i <= num; i++) {
        cin >> mat[i].row >> mat[i].col >> mat[i].val;
    }
}

// Function to display sparse matrix
void display(Sparse mat[]) {
    int num = mat[0].val;
    cout << "\nRow\tCol\tVal\n";
    for (int i = 0; i <= num; i++) {
        cout << mat[i].row << "\t" << mat[i].col << "\t" << mat[i].val << endl;
    }
}

// Function to transpose
void transpose(Sparse a[], Sparse b[]) {
    int num = a[0].val;
    b[0].row = a[0].col;
    b[0].col = a[0].row;
    b[0].val = num;

    int k = 1;
    for (int i = 0; i < a[0].col; i++) {
        for (int j = 1; j <= num; j++) {
            if (a[j].col == i) {
                b[k].row = a[j].col;
                b[k].col = a[j].row;
                b[k].val = a[j].val;
                k++;
            }
        }
    }
}

// Function to add two sparse matrices
void add(Sparse a[], Sparse b[], Sparse c[]) {
    if (a[0].row != b[0].row || a[0].col != b[0].col) {
        cout << "Addition not possible\n";
        return;
    }

    int i = 1, j = 1, k = 1;
    c[0].row = a[0].row;
    c[0].col = a[0].col;

    while (i <= a[0].val && j <= b[0].val) {
        if (a[i].row == b[j].row && a[i].col == b[j].col) {
            c[k].row = a[i].row;
            c[k].col = a[i].col;
            c[k].val = a[i].val + b[j].val;
            i++; j++; k++;
        }
        else if ((a[i].row < b[j].row) || 
                (a[i].row == b[j].row && a[i].col < b[j].col)) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    while (i <= a[0].val) c[k++] = a[i++];
    while (j <= b[0].val) c[k++] = b[j++];

    c[0].val = k - 1;
}

// Main
int main() {
    Sparse a[MAX], b[MAX], c[MAX];
    int m, n, num;

    cout << "Enter first matrix:\n";
    readSparse(a, m, n, num);
    display(a);

    cout << "\nTranspose of first matrix:\n";
    transpose(a, b);
    display(b);

    cout << "\nEnter second matrix (for addition):\n";
    readSparse(c, m, n, num);

    Sparse sum[MAX];
    add(a, c, sum);
    cout << "\nResult of addition:\n";
    display(sum);

    return 0;
}
