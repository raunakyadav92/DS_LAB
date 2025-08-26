#include <iostream>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}

int main() {
    string s = "beautiful";
    string result = "";
    for (char c : s) if (!isVowel(c)) result += c;
    cout << "After removing vowels: " << result;
    return 0;
}
