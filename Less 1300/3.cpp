#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;

    while(t--){
        bool swap = false;
         
        for(int i = 1; i < n ; i++){
            if(swap) {
            swap = false;
            continue;
        }
        if(s[i] == 'G' &&  s[i-1] == 'B'){
            s[i-1] = 'G';
            s[i] = 'B';
            swap = true;
        }
    }
    } 
    
    cout << s << endl;
    return 0;
}