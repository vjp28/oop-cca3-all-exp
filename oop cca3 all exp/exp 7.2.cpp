#include <iostream>
using namespace std;

class Sum {
public:
    // Sum of integers
    int add(int arr[], int n) {
        int total = 0;
        for(int i = 0; i < n; i++)
            total += arr[i];
        return total;
    }

    // Sum of floats
    float add(float arr[], int n) {
        float total = 0;
        for(int i = 0; i < n; i++)
            total += arr[i];
        return total;
    }
};

int main() {
    Sum s;
    int intArr[10];
    float floatArr[5];

    cout << "Enter 10 integers:\n";
    for(int i = 0; i < 10; i++) cin >> intArr[i];

    cout << "Enter 5 float values:\n";
    for(int i = 0; i < 5; i++) cin >> floatArr[i];

    cout << "Sum of integers = " << s.add(intArr, 10) << endl;
    cout << "Sum of floats = " << s.add(floatArr, 5) << endl;
    return 0;
}
