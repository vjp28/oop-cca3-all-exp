#include <iostream>
using namespace std;
class Account {
    int acc_no;
    float balance;
public:
    void input() {
        cout << "Enter Account No and Balance: ";
        cin >> acc_no >> balance;
    }
    void process() {
        if (balance >= 5000) balance += balance * 0.1;
    }
    void display() {
        cout << "Account No: " << acc_no << " Balance: " << balance << endl;
    }
};
int main() {
    Account a[10];
    for (int i = 0; i < 10; i++) a[i].input();
    for (int i = 0; i < 10; i++) a[i].process();
    for (int i = 0; i < 10; i++) a[i].display();
}
