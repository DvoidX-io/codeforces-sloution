#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){


        int n;
        long long k;
        cin >> n >> k;

        long long a[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a, a+n);

        int current=1;
        int best=0;

        for(int i =1;i<n;i++){
            
            if(a[i]-a[i-1]<=k){
                current++;
            }else{
                best=max(best,current);
                current=1;

                best=max(best,current);

            }

            cout << n-best << endl;


        }

        return 0;
    }
}