#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int n = s.length();

        if (n % 2 != 0)
        {
            cout << "NO\n";
            continue;
        }

        string first = s.substr(0, n / 2);
        string second = s.substr(n / 2);

        if (first == second)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}