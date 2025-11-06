#include <iostream>
using namespace std;

class Number {
    int value;
public:
    void getValue() {
        cout << "Enter a number: ";
        cin >> value;
    }

    void operator-() {  // Overloading unary minus
        value = -value;
    }

    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Number n;
    n.getValue();
    -n;  // Calls overloaded unary minus operator
    cout << "After applying unary minus:\n";
    n.display();
    return 0;
}
