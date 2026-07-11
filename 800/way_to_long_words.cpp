#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; 
    cin >> n; // number of words
    while (n--) {
        string word;
        cin >> word;

        if (word.length() > 10) {
            cout << word.front()       // first letter
                 << word.length() - 2  // number in the middle
                 << word.back()        // last letter
                 << endl;
        } else {
            cout << word << endl; // short words stay the same
        }
    }
    return 0;
}
