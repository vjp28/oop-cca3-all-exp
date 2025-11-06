#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    void getRoll() { cout << "Enter roll no: "; cin >> roll; }
};

class Test : public Student {
public:
    float marks;
    void getMarks() { cout << "Enter marks: "; cin >> marks; }
};

class Sports {
public:
    float score;
    void getScore() { cout << "Enter sports score: "; cin >> score; }
};

class Result : public Test, public Sports {
public:
    void display() {
        cout << "\nRoll No: " << roll << "\nTotal = " << marks + score << endl;
    }
};

int main() {
    Result r;
    r.getRoll();
    r.getMarks();
    r.getScore();
    r.display();
    return 0;
}
