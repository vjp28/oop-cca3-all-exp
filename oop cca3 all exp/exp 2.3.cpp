#include <iostream>
using namespace std;
class Staff {
    string name, post;
public:
    void input() {
        cout << "Enter Name and Post: ";
        cin >> name >> post;
    }
    string getPost() { return post; }
    string getName() { return name; }
};
int main() {
    Staff s[5];
    for (int i = 0; i < 5; i++) s[i].input();
    cout << "HODs:\n";
    for (int i = 0; i < 5; i++)
        if (s[i].getPost() == "HOD")
            cout << s[i].getName() << endl;
}
