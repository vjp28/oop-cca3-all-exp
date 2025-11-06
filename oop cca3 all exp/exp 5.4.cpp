#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;
public:
    Rectangle() {  // Default constructor
        length = 0;
        breadth = 0;
    }
    Rectangle(int l) {  // One parameter
        length = breadth = l;
    }
    Rectangle(int l, int b) {  // Two parameters
        length = l;
        breadth = b;
    }
    void area() {
        cout << "Area = " << length * breadth << endl;
    }
};

int main() {
    Rectangle r1, r2(5), r3(4, 6);
    cout << "Default Constructor: "; r1.area();
    cout << "Single Parameter Constructor: "; r2.area();
    cout << "Two Parameter Constructor: "; r3.area();
    return 0;
}
