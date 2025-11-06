#include <iostream>
using namespace std;

class Sports {
public:
    int score;
    void getScore() { cout << "Enter sports score: "; cin >> score; }
};

class Academics {
public:
    int marks;
    void getMarks() { cout << "Enter academic marks: "; cin >> marks; }
};

class Result : public Sports, public Academics {
public:
    void display() {
        cout << "Total = " << (score + marks) << endl;
    }
};

int main() {
    Result r;
    r.getScore();
    r.getMarks();
    r.display();
    return 0;
}
