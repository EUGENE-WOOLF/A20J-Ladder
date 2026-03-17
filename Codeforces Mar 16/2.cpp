#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        vector<int> test;
        int n;
        cin >> n;
        int max = INT_MIN;
        int index;
        for(int i = 0; i < n; i++){
            int num;
            cin >> num;
            test.push_back(num);
            if(test[i] >= max ){
                max = test[i];
                index = i;
            }
        }
        cout << n - index << "\n";
    }
    return 0;
}