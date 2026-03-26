#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int upperCaseCount = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] - tolower(s[i]) != 0){
            upperCaseCount++;
        }
    }

    bool moreUpper = upperCaseCount > s.length() - upperCaseCount;

    if(moreUpper){
        for(int i = 0; i < s.length(); i++){
            s[i] = toupper(s[i]);
        }
    }else{
        for(int i = 0; i < s.length(); i++){
            s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;
    return 0;
}
