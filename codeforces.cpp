#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    string s = "codeforces";

    while(t--){
        char c;
        cin >> c;
        bool found = false;

        for(char ch : s){
            if(ch == c) {
                found = true;
                break;
            }
        }

        cout << (found ? "YES" : "NO") << endl;

    }
    return 0;
}