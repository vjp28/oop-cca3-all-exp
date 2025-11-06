#include <iostream>
using namespace std;

class College {
    int roll_no;
    string name, course;
public:
    College(int r, string n, string c = "Computer Engineering") {
        roll_no = r;
        name = n;
        course = c;
    }
    void display() {
        cout << "Roll No: " << roll_no << "\nName: " << name << "\nCourse: " << course << endl;
    }
};

int main() {
    College c1(101, "Varad");
    College c2(102, "Rohit", "Mechanical Engineering");
    cout << "\n--- Student 1 ---\n";
    c1.display();
    cout << "\n--- Student 2 ---\n";
    c2.display();
    return 0;
}
