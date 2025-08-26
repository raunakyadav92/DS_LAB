#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int mat[10][10];

    cout << "Enter matrix:\n";
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> mat[i][j];

    bool flag = true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j] != mat[j][i])
                flag = false;
        }
    }

    if(flag) cout << "Matrix is Symmetric";
    else cout << "Not Symmetric";
    return 0;
}
