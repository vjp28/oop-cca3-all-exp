#include <iostream>
using namespace std;
class B;
class A {
    int a;
public:
    void input() { cout << "Enter number A: "; cin >> a; }
    friend void greatest(A, B);
};
class B {
    int b;
public:
    void input() { cout << "Enter number B: "; cin >> b; }
    friend void greatest(A, B);
};
void greatest(A x, B y) {
    if (x.a > y.b) cout << "Greatest: " << x.a;
    else cout << "Greatest: " << y.b;
}
int main() {
    A a; B b;
    a.input(); b.input();
    greatest(a, b);
}
