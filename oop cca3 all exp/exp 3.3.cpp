#include <iostream>
using namespace std;
class Outer {
    int x;
public:
    void input() {
        cout << "Enter value of x: ";
        cin >> x;
    }
    class Inner {
        int y;
    public:
        void input() {
            cout << "Enter value of y: ";
            cin >> y;
        }
        void display(int x) {
            cout << "x: " << x << " y: " << y << endl;
        }
    };
};
int main() {
    Outer o;
    Outer::Inner i;
    o.input();
    i.input();
    i.display(10);
}
