#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 1, 4};
    int n = 6;
    set<int> s(arr, arr + n);
    cout << "Distinct elements count: " << s.size();
    return 0;
}
