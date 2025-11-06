#include <iostream>
using namespace std;
class Time {
    int h, m, s;
public:
    void input() {
        cout << "Enter time (HH MM SS): ";
        cin >> h >> m >> s;
    }
    void display() {
        int total = h * 3600 + m * 60 + s;
        cout << "Total seconds: " << total;
    }
};
int main() {
    Time t;
    t.input();
    t.display();
}
