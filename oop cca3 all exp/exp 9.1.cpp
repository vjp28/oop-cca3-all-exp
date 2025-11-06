#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("First.txt");
    ofstream fout("Second.txt");

    if(!fin) {
        cout << "Source file not found!";
        return 0;
    }

    char ch;
    while(fin.get(ch)) {
        fout.put(ch);
    }

    cout << "File copied successfully!" << endl;

    fin.close();
    fout.close();
    return 0;
}
