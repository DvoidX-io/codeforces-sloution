#include <iostream>
using namespace std;
int main(){
    int x;

    cin >> x;

    int mishka = 0;
    int chris = 0;

    while(x--){
        int a,b;
        cin >> a >> b;

        if(a > b){
            mishka++;
        }
        else if(a < b){
            chris++;
        }
    }


    if(mishka > chris){
        cout << "Mishka" << endl;
    }
    else if(chris > mishka){
        cout << "Chris" << endl;
    }
    else{
        cout << "Friendship is magic!^^" << endl;
    }
}
