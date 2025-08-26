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
        for(int j=i+1;j<n;j++){ // above diagonal
            if(mat[i][j] != 0)
                flag = false;
        }
    }

    if(flag) cout << "Matrix is Lower Triangular";
    else cout << "Not Lower Triangular";
    return 0;
}
