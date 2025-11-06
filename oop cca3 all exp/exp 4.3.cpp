#include <iostream>
using namespace std;
class Sample {
    int n;
public:
    void input() { cout << "Enter number: "; cin >> n; }
    void display() { cout << n << endl; }
    friend void swapData(Sample&, Sample&);
};
void swapData(Sample& x, Sample& y) {
    int temp = x.n;
    x.n = y.n;
    y.n = temp;
}
int main() {
    Sample s1, s2;
    s1.input();
    s2.input();
    swapData(s1, s2);
    s1.display();
    s2.display();
}
