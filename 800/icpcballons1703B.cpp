#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int vis[26] = {0};
        int ans = 0;
        for(int i =0;i<n:i++){
            int index = s[i] = 'A';

            if(vis[index] == 0{
                ans += 2;
                vis[index] = 1;

            }
            else{
                ans += 1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}