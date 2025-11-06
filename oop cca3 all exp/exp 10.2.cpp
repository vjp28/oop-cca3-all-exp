#include <iostream>
#include <string>
using namespace std;

template <class T>
T square(T x) {
    return x * x;
}

// Template specialization for string
template <>
string square<string>(string s) {
    return s + s;
}

int main() {
    int i = 4;
    string str = "Hello";

    cout << "Square of integer: " << square(i) << endl;
    cout << "Square of string: " << square(str) << endl;
    return 0;
}
