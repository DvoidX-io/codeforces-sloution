#include <iostream>
using namespace std;

int main(){

    string a;

    cin >> a ;

   for(char c : a) {

    if(c == 'H'|| c == 'Q' || c == '9' ){

    cout << "YES" ;
    return 0;
   }
   }
    cout << "NO" ;
    return 0;

}