#include<bits/stdc++.h>

using namespace std;

int main(){ 
    int a;
    string s;
    cin >> a;
    cin >> s;
    int count = 0;
    for(int i = 1; i < s.length(); i++){
        if(s[i-1] == s[i] || s[i] == s[i+1]){
            s.erase(i,1);
            count++;
            i--;
        }
    }
    cout << count<< endl;
    return 0;
}
