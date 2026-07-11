#include <iostream>
using namespace std;


    bool distinct(int year){
        int freq[10] = {0};

        while(year > 0){
            int d = year%10;
            if(freq[d] == 1)
            return false;
            freq[d] = 1;
            year /= 10;

        }
        return true;

    }

    int main() {
        int y;
        cin >> y;

        for(int i = y +1; ; i++){
            if (distinct(i)) {
                cout << i << endl;
                break;
            }
        }
return 0;   
    }
