#include <iostream>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    int count = 0;

    for (int i = 0; i < n; i++) {

        int y;
        cin >> y;

        if (y <= 5 - k)
            count++;
    }

    cout << count / 3;

    return 0;
}
