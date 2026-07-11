#include <iostream>
using namespace std;

int main(){
    int x;
    int solved = 0;
     cin>>x;

     for(int i=0;i<x;i++){
        int a,b,c;
        cin>> a >> b >> c;

        int sum = a+b+c;
        if(sum>=2){
            solved++;
                }
     }
     cout<< solved << endl;
     return 0;
}