#include <iostream>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        string b;
        cin >> b;

        for(int i = 0; i < b.size()-1; i+=2)
        cout << b[i];

        cout << b.back() << endl;
    } 
    return 0;
    
}
