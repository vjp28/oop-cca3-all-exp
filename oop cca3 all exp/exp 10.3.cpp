#include <iostream>
using namespace std;

template <class T>
class Calculator {
    T a, b;
public:
    Calculator(T x, T y) { a = x; b = y; }
    void display() {
        cout << "Addition: " << a + b << endl;
        cout << "Subtraction: " << a - b << endl;
        cout << "Multiplication: " << a * b << endl;
        cout << "Division: " << a / b << endl;
    }
};

int main() {
    Calculator<int> c1(10, 5);
    cout << "Integer Operations:\n";
    c1.display();

    Calculator<float> c2(5.5, 2.2);
    cout << "\nFloat Operations:\n";
    c2.display();
    return 0;
}
