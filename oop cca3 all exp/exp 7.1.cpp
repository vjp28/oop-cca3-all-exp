#include <iostream>
using namespace std;

class Area {
public:
    // Area of rectangle
    int calculate(int l, int b) {
        return l * b;
    }

    // Area of square
    int calculate(int side) {
        return side * side;
    }
};

int main() {
    Area a;
    int l, b, s;
    cout << "Enter length and breadth of laboratory: ";
    cin >> l >> b;
    cout << "Enter side of classroom: ";
    cin >> s;

    cout << "Area of laboratory (rectangle): " << a.calculate(l, b) << endl;
    cout << "Area of classroom (square): " << a.calculate(s) << endl;
    return 0;
}
