#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[101];

    for(int i = 0; i<n;i++){
        cin >> a[i];


    }

    int maxVal = a[0], minVal = a[0];
    int maxIndex = 0, minIndex = 0;

    // find max and min values
    for(int i=0;i<n;i++){
        if (a[i] > maxVal) {
            maxVal = a[i];
            maxIndex = i;
        }
        if (a[i] <= minVal){ //right most minimum
            minVal = a[i];
            minIndex = i;

        }
    }

    int swaps = maxIndex + (n - 1 - minIndex);

    if(maxIndex > minIndex)
    swaps--;

    cout << swaps << endl;

    return 0;
}