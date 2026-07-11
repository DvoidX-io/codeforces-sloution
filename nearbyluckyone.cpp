#include <iostream>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
 
    int count = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 4 || digit == 7)
            count++;
        n /= 10;
    }
 
    if (count == 0) {
        cout << "NO";
        return 0;
    }
 
    while (count > 0) {
        int d = count % 10;
        if (d != 4 && d != 7) {
            cout << "NO";
            return 0;
        }
        count /= 10;
    }
 
    cout << "YES";
    return 0;
}