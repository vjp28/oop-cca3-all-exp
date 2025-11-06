#include <iostream>
#include <string>
using namespace std;

class Concatenate {
    string str;
public:
    Concatenate() {}
    Concatenate(string s) { str = s; }

    Concatenate operator+(Concatenate obj) {   // Overload '+'
        Concatenate temp;
        temp.str = str + obj.str;
        return temp;
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    Concatenate s1("xyz"), s2("pqr"), s3;
    s3 = s1 + s2;
    cout << "Concatenated String: ";
    s3.display();
    return 0;
}
