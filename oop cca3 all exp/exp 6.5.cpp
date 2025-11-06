#include <iostream>
using namespace std;

class Student {
protected:
    int roll;
public:
    void getRoll() { cout << "Enter roll no: "; cin >> roll; }
};

class Test : virtual public Student {
protected:
    int marks1, marks2;
public:
    void getMarks() {
        cout << "Enter marks in two subjects: ";
        cin >> marks1 >> marks2;
    }
};

class Sports : virtual public Student {
protected:
    int score;
public:
    void getScore() { cout << "Enter sports score: "; cin >> score; }
};

class Result : public Test, public Sports {
public:
    void display() {
        cout << "\nRoll No: " << roll;
        cout << "\nTotal = " << (marks1 + marks2 + score) << endl;
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
