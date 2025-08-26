#include <iostream>
using namespace std;

#define MAX 100
int stack[MAX], top = -1;

bool isEmpty() {
    return top == -1;
}
bool isFull() {
    return top == MAX - 1;
}
void push(int x) {
    if (isFull()) cout << "Stack Overflow\n";
    else stack[++top] = x;
}
void pop() {
    if (isEmpty()) cout << "Stack Underflow\n";
    else cout << "Popped: " << stack[top--] << endl;
}
void display() {
    if (isEmpty()) cout << "Stack is empty\n";
    else {
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) cout << stack[i] << " ";
        cout << endl;
    }
}
void peek() {
    if (isEmpty()) cout << "Stack is empty\n";
    else cout << "Top element: " << stack[top] << endl;
}

int main() {
    int choice, val;
    do {
        cout << "\n1.Push 2.Pop 3.Display 4.isEmpty 5.isFull 6.Peek 7.Exit\n";
        cin >> choice;
        switch (choice) {
            case 1: cout << "Enter value: "; cin >> val; push(val); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: cout << (isEmpty() ? "Stack Empty\n" : "Not Empty\n"); break;
            case 5: cout << (isFull() ? "Stack Full\n" : "Not Full\n"); break;
            case 6: peek(); break;
            case 7: cout << "Exiting...\n"; break;
        }
    } while (choice != 7);
    return 0;
}
