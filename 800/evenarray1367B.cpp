#include <iostream>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >>n;
        int  evenwrong = 0;
        int oddwrong = 0;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;

            if(i % 2== 0 && x % 2 != 0)
                evenwrong++;

                if(i % 2 == 1 && x % 2 == 0)
                oddwrong++;
            
        
            }

            if (evenwrong == oddwrong)
                cout << evenwrong << endl;
            else
                cout << -1 << endl;
        }
             return 0;
}