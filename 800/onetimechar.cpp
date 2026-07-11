#include <iostream>
using namespace std;

int main(){
    int n;

    cin >> n;

    string s;
    cin >> s;

    bool present[26] = {false};

    for(int i = 0; i < n; i++){
        char c = tolower(s[i]);
        present[c - 'a'] = true;
    }

    int count = 0;
    for(int i = 0; i < 26; i++){
        if (present[i]) count++;

    }

    if(count == 26)
    cout << "YES";
    else 
    cout << "NO";

    return 0;
}