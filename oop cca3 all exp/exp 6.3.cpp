#include <iostream>
using namespace std;

class Person {
public:
    string name;
    void getName() { cout << "Enter name: "; cin >> name; }
};

class Student : public Person {
public:
    void showStudent() { cout << "Student Name: " << name << endl; }
};

class Teacher : public Person {
public:
    void showTeacher() { cout << "Teacher Name: " << name << endl; }
};

int main() {
    Student s;
    Teacher t;
    s.getName();
    t.getName();
    s.showStudent();
    t.showTeacher();
    return 0;
}
