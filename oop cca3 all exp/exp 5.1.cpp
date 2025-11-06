#include <iostream>
using namespace std;

class Sum {
    int n, total;
public:
    Sum(int num) {  // Parameterized constructor
        n = num;
        total = 0;
        for(int i = 1; i <= n; i++)
            total += i;
    }
    void display() {
        cout << "Sum of numbers from 1 to " << n << " = " << total << endl;
    }
};

int main() {
    int num;
    cout << "Enter n: ";
    cin >> num;
    Sum s(num);
    s.display();
    return 0;
}
