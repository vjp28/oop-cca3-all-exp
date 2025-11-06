#include <iostream>
using namespace std;

class Person {
public:
    string name;
    void getName() { cout << "Enter name: "; cin >> name; }
};

class Student : public Person {
public:
    int roll;
    void getRoll() { cout << "Enter roll no: "; cin >> roll; }
};

class Result : public Student {
public:
    float marks;
    void getMarks() { cout << "Enter marks: "; cin >> marks; }
    void display() {
        cout << "\nName: " << name << "\nRoll No: " << roll << "\nMarks: " << marks << endl;
    }
};

int main() {
    Result r;
    r.getName();
    r.getRoll();
    r.getMarks();
    r.display();
    return 0;
}
