#include <iostream>
using namespace std;

int main(){

    int a[4];

    for(int i = 0; i < 4; i++)
    cin >> a[i];

    string s;
    cin >> s;

    int ans = 0;

    for(int i = 0; i < s.size(); i++){

        ans += a[s[i] - '1'];

    }

    cout << ans;

    return 0;
}
