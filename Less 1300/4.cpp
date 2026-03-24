#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    string ans = "";
    int length = s.length();
    for(int i = 0; i < length; i++){
        if(i == 0 && s[i] == '.'){
            ans += '0';
            continue;
        }
     
        if(s[i] == '.' && s[i-1] == '-' && s[i-2] == '-'){
            ans += '0';
        }else if(s[i] == '.' && s[i-1] == '.' && s[i-2] == '-'){
            ans += '0';
        }else if(s[i] == '.' && s[i-1] == '-' && s[i-2] == '.' ){
            ans += '0';
        }else if(s[i] == '.' && s[i+1] == '.' && s[i-2] == '-' ){
            ans += '1';
        }else if(s[i] == '-' && s[i+1] == '.' && s[i-1] != '-' ){
            ans += '1';
        }else if(s[i] == '-' && s[i+1] == '-'){
            ans += '2';
        }
    }
    cout << ans << endl;
    return 0;
}