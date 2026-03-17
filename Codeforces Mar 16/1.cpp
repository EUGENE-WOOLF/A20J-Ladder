#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int numberOfStudent;
        string s;
        cin >> numberOfStudent;
        cin >> s;
        set<int> uniqueSequence;
        uniqueSequence.insert(0);
        int j = 0;
        for(int i = 0; i < s.length(); i++){
            //reading for the stirng RLLRL
            if(s[j] == 'R'){
                j++;

            }else {
                j--;
        }
         uniqueSequence.insert(j);


        }
        cout << uniqueSequence.size() << "\n";
    
}
}