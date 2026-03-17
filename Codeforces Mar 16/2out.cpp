#include <bits/stdc++.h>

using namespace std;

int main(){
     int t;
    cin >> t;
    while(t--) {
        int counter = 0;
        int n;
        cin >> n;
        int max;
        int index;
        for(int i = 0; i < n; i++){
            int num;
            if(i == 0){
                cin >> num;
                max = num;
                counter++;
                continue;
            }
            cin >> num;
            if(num >= max){
                max = num;
                counter++;
            }
            
        }
        cout << counter << "\n";
    }
    return 0;
   

}