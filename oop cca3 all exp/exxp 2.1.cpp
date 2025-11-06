#include <iostream>
using namespace std;
class City {
    string name;
    long population;
public:
    void input() {
        cout << "Enter city name and population: ";
        cin >> name >> population;
    }
    long getPop() { return population; }
    string getName() { return name; }
};
int main() {
    City c[5];
    for (int i = 0; i < 5; i++) c[i].input();
    int max = 0;
    for (int i = 1; i < 5; i++)
        if (c[i].getPop() > c[max].getPop()) max = i;
    cout << "City with highest population: " << c[max].getName();
}
