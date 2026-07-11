#include <iostream>
using namespace std;

int main(){
    int x,y;
    cin>> x >> y;

    int a[50];


    for(int i=0;i < x;i++){
        cin >> a[i];

    }
    int threshold = a[y - 1];
    int count = 0;

    for(int i = 0;i < x; i++){

        if(a[i] >= threshold && a[i] > 0){
            
            count++;
        }
    }

    cout << count << endl;
    return 0;

}
