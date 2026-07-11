#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; 
    cin >> n;        // number of statements
    int x = 0;       // initial value

    for (int i = 0; i < n; i++) {
        string statement;
        cin >> statement;   // read statement like "++X" or "X--"
        
        if (statement.find("++") != string::npos) {
            x += 1;  // increment
        } else {
            x -= 1;  // decrement
        }
    }

    cout << x << endl;
    return 0;
}
