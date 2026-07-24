#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        string s;
        cin >> s;

        int dots = 0;
        int mx = 0;
        int cnt = 0;

        for (int i = 0; i < n; i++) {

            if (s[i] == '.') {
                dots++;
                cnt++;
                mx = max(mx, cnt);
            } else {
                cnt = 0;
            }
        }

        if (mx >= 3)
            cout << 2 << endl;
        else
            cout << dots << endl;
    }

    return 0;
}