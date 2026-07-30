#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int t;
    cin >> t;

    string name = "Timur";
    sort(name.begin(), name.end());

    while(t--){

        int n;
        cin >> n;

        string s;
        cin >> s;

        if(n != 5){
            cout << "NO" << endl;
            continue;
        }

        sort(s.begin(), s.end());

        if(s == name)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

