#include <iostream>
#include <cctype>
using namespace std;

int main(){
    string s;
    cin >> s;

    bool ok = true;


    // Check if all letters the first are uppercase
 
    for(int i = 1; i < s.size(); i++){
        if(islower(s[i])) {
            ok = false;
            break;
        }
    }

    if(ok){
    for(int i = 0; i < s.size(); i++){
        if(islower(s[i]))
        s[i] = toupper(s[i]);
        else
        s[i] = tolower(s[i]);
    } 
}

cout << s;
return 0;
}