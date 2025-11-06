#include <iostream>
using namespace std;

template <class T>
T sum(T arr[], int n) {
    T total = 0;
    for(int i = 0; i < n; i++)
        total += arr[i];
    return total;
}

int main() {
    int intArr[5] = {1, 2, 3, 4, 5};
    float floatArr[5] = {1.2, 2.3, 3.4, 4.5, 5.6};

    cout << "Sum of integer array: " << sum(intArr, 5) << endl;
    cout << "Sum of float array: " << sum(floatArr, 5) << endl;
    return 0;
}
