#include <iostream>
using namespace std;
class Book {
    string title, author;
    float price;
public:
    void input() {
        cout << "Enter Title, Author and Price: ";
        cin >> title >> author >> price;
    }
    void display() {
        cout << "Title: " << title << "\nAuthor: " << author << "\nPrice: " << price << endl;
    }
};
int main() {
    Book b, *ptr;
    ptr = &b;
    ptr->input();
    ptr->display();
}
