#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long a = n / 3;
        long long b = n / 3;

        if (n % 3 == 1) {
            a++;
        }
        else if (n % 3 == 2) {
            b++;
        }

        cout << a << " " << b << endl;
    }

    return 0;
}