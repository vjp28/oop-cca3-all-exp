#include <iostream>
using namespace std;
class Book {
    string book_name;
    float price;
    int pages;
public:
    void input() {
        cout << "Enter Book Name, Price and Pages: ";
        cin >> book_name >> price >> pages;
    }
    float getPrice() { return price; }
    string getName() { return book_name; }
};
int main() {
    Book b1, b2;
    b1.input();
    b2.input();
    if (b1.getPrice() > b2.getPrice())
        cout << "Book with higher price: " << b1.getName();
    else
        cout << "Book with higher price: " << b2.getName();
}
