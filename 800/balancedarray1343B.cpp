#include <iostream>
using namespace std;
int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;


        if(n % 4 != 0){
            cout << "NO" << endl;
            continue;

        }
        cout << "YES" << endl;
    

    int evensum = 0;
    int oddsum = 0;

    // Print the even numbers
    for(int i = 2; i <= n; i += 2){
        cout << i << " ";
        evensum += i;
    }

    //Print the odd numbers
    for(int i = 1; i < n - 1; i += 2){
        cout << i << " ";
        oddsum += i;
    }

    // Print the last odd number
    cout << evensum - oddsum << endl;
}
return 0;
}
