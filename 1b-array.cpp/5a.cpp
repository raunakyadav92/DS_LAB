#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int mat[10][10];
    cout << "Enter elements:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> mat[i][j];
        }
    }

    bool flag = true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j && mat[i][j]!=0)
                flag = false;
        }
    }

    if(flag) cout << "Matrix is Diagonal";
    else cout << "Not Diagonal";
    return 0;
}
