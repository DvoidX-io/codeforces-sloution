#include <bits/stdc++.h>
using namespace std;

int maiin(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        if(n==1){
            cout << 1 << endl;
            continue;
        }

        if(n==2){
            cout << -1 << endl;
            continue;

        }

        vector<long long> ans;

        long long x = 3;

    for(int i = 0; i < n -2; i++)
    {
        ans.push_back(x);
        x *= 2;
    }

     ans.push_back(1);
     ans.push_back(2);


     for(long long v: ans)
     cout << v << " ";

     cout << endl;
    }

    return 0;
}