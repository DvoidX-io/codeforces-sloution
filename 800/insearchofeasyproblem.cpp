#include <iostream>
using namespace std;

int main(){
    int  x;
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
    cin >> x;
    if(x == 1){
    cout << "HARD";
    return 0;
    }
    }
    cout << "EASY";
    return 0;

}