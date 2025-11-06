#include <iostream>
using namespace std;

class Counter {
    int count;
public:
    Counter() { count = 0; }
    Counter(int c) { count = c; }

    // Pre-increment
    void operator++() {
        ++count;
    }

    // Post-increment
    void operator++(int) {
        count++;
    }

    void display() {
        cout << "Count = " << count << endl;
    }
};

int main() {
    Counter c1(5);

    cout << "Initial value:\n";
    c1.display();

    ++c1;  // Pre-increment
    cout << "After pre-increment:\n";
    c1.display();

    c1++;  // Post-increment
    cout << "After post-increment:\n";
    c1.display();

    return 0;
}
