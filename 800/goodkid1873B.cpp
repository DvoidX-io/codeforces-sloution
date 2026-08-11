#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int a[9];

        // Input
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // Find minimum
        int mn = 0;

        for(int i = 1; i < n; i++)
        {
            if(a[i] < a[mn])
            {
                mn = i;
            }
        }

        // Increase minimum by 1
        a[mn]++;

        // Calculate product
        int product = 1;

        for(int i = 0; i < n; i++)
        {
            product *= a[i];
        }

        cout << product << endl;
    }

    return 0;
}