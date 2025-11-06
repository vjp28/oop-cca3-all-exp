#include <iostream>
using namespace std;

class ILogin {
protected:
    string name, password;
public:
    virtual void accept() = 0; // pure virtual function
};

class EmailLogin : public ILogin {
public:
    void accept() {
        cout << "Enter Email ID: ";
        cin >> name;
        cout << "Enter Password: ";
        cin >> password;
        cout << "Email Login Details:\n";
        cout << "Email: " << name << "\nPassword: " << password << endl;
    }
};

class MembershipLogin : public ILogin {
public:
    void accept() {
        cout << "Enter Membership ID: ";
        cin >> name;
        cout << "Enter Password: ";
        cin >> password;
        cout << "Membership Login Details:\n";
        cout << "ID: " << name << "\nPassword: " << password << endl;
    }
};

int main() {
    ILogin *ptr;

    EmailLogin e;
    MembershipLogin m;

    cout << "\n--- Email Login ---\n";
    ptr = &e;
    ptr->accept();

    cout << "\n--- Membership Login ---\n";
    ptr = &m;
    ptr->accept();

    return 0;
}
