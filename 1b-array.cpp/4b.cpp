#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s = "Hello";
    reverse(s.begin(), s.end());
    cout << "Reversed: " << s;
    return 0;
}
