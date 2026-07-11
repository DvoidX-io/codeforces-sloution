#include<iostream>
using namespace std;

int main(){

    long long  x,y,n;
    cin>>x>>y>>n;

    long long Length = (x + y - 1)/n;
    long long Width = (x + y - 1)/n;

    cout << Length * Width << endl;

    return 0;
}