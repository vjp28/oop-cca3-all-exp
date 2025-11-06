#include <iostream>
using namespace std;

class Student {
    string name;
    float percentage;
public:
    Student(string n, float p) {  // Parameterized constructor
        name = n;
        percentage = p;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    string name;
    float per;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter percentage: ";
    cin >> per;
    Student s(name, per);
    s.display();
    return 0;
}
