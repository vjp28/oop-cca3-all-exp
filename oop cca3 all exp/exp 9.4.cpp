#include iostream
#include fstream
#include string
using namespace std;

int main() {
    ifstream fin(sample.txt);
    string word, target;
    int count = 0;

    cout  Enter word to search ;
    cin  target;

    while(fin  word) {
        if(word == target)
            count++;
    }

    cout  Word '  target  ' occurs   count   times.  endl;
    fin.close();
    return 0;
}
