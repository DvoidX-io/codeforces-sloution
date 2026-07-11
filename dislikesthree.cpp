#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int num = 1;

    while(v.size() < 1000){
        if(num % 3 != 0 && num % 10 != 3){
            v.push_back(num);

        }
        num++;
    }
    int t;
    cin >> t;

    while(t--){
        int k;
        cin >> k;
        cout << v[k - 1] << endl;

    }
    return 0;
}