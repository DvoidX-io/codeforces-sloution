#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> coins(n);
    int total = 0;

    for(int i = 0; i < n; i++){
        cin >> coins[i];
        total += coins[i];
    }

    // sort in descending order

    sort (coins.rbegin() ,coins.rend());

    int mySum = 0, count = 0;

    for(int i=0;i < n; i++){
        mySum += coins[i];
        count++;

        if(mySum > total - mySum ){
            break;
        }
    }

    cout << count << endl;

    return 0;

    }




