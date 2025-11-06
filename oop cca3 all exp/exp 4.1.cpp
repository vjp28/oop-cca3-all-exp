#include <iostream>
using namespace std;
class Result {
    float marks;
public:
    void input() {
        cout << "Enter marks: ";
        cin >> marks;
    }
    float getMarks() { return marks; }
};
float average(Result r1, Result r2) {
    return (r1.getMarks() + r2.getMarks()) / 2;
}
int main() {
    Result r1, r2;
    r1.input();
    r2.input();
    cout << "Average: " << average(r1, r2);
}
