#include <iostream>
using namespace std;
class Student {
    int roll_no;
    float percentage;
public:
    void input() {
        cout << "Enter Roll No and Percentage: ";
        cin >> roll_no >> percentage;
    }
    void display() {
        cout << "Roll No: " << this->roll_no << "\nPercentage: " << this->percentage << endl;
    }
};
int main() {
    Student s;
    Student* ptr = &s;
    ptr->input();
    ptr->display();
}
