#include <iostream>
using namespace std;

template <class T>
class Stack {
    T arr[10];
    int top;
public:
    Stack() { top = -1; }

    void push(T item) {
        if(top == 9) cout << "Stack Overflow\n";
        else arr[++top] = item;
    }

    void pop() {
        if(top == -1) cout << "Stack Underflow\n";
        else cout << "Popped: " << arr[top--] << endl;
    }

    void display() {
        cout << "Stack elements: ";
        for(int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();
    return 0;
}
