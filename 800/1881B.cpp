#include <bits/stdc++.h>
using namespace std;

bool check(long long x, long long a, long long b, long long c)
{
    if (a % x != 0 || b % x != 0 || c % x != 0)
        return false;

    long long cuts = (a / x - 1)
                   + (b / x - 1)
                   + (c / x - 1);

    return cuts <= 3;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        vector<long long> v = {a, b, c};
        bool ok = false;

        for (long long num : v)
        {
            for (int k = 1; k <= 4; k++)
            {
                if (num % k == 0)
                {
                    long long x = num / k;

                    if (check(x, a, b, c))
                    {
                        ok = true;
                    }
                }
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}