#include <iostream>
using namespace std;
class Student {
    int roll_no;
    string name, cls;
public:
    void input() {
        cout << "Enter Roll No, Name and Class: ";
        cin >> roll_no >> name >> cls;
    }
    void display() {
        cout << "Roll No: " << roll_no << "\nName: " << name << "\nClass: " << cls << endl;
    }
};
int main() {
    Student s;
    s.input();
    s.display();
}
