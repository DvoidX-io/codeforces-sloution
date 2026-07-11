#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long a,b;
        cin >> a >> b;

        long long d = abs(a - b);
        long long moves = (d + 9) / 10;

        cout << moves << endl;
    }
    return 0;
}