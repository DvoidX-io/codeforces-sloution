#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
    
    int a,b,c;
    cin  >> a >> b >> c;
    if(a<b && b<c){
        cout << "Stair" << endl;}
        
        else if (a<b && b>c){
            cout << "Peak" << endl;
        }
        else {
            cout << "None" << endl;
        }

    
}
}
