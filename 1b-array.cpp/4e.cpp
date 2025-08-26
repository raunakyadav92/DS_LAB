#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s = "HELLO";
    for (char &c : s) c = tolower(c);
    cout << "Lowercase: " << s;
    return 0;
}
