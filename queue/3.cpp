#include <iostream>
#include <queue>
using namespace std;

void interleaveQueue(queue<int>& q) {
    int n = q.size();
    int half = n / 2;
    queue<int> temp;

    for (int i = 0; i < half; i++) {
        temp.push(q.front());
        q.pop();
    }

    while (!temp.empty()) {
        q.push(temp.front());
        temp.pop();
        q.push(q.front());
        q.pop();
    }
}

int main() {
    queue<int> q;
    q.push(4);
    q.push(7);
    q.push(11);
    q.push(20);
    q.push(5);
    q.push(9);

    interleaveQueue(q);

    cout << "Output: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}