#include <bits/stdc++.h>

using namespace std;

int main(){
    int test;
    cin >> test;
    int finalX = 0, finalY = 0, finalZ = 0;
    while(test--){
        int a, b, c;
        cin >> a;
        cin >> b;
        cin >> c;
        finalX += a;
        finalY += b;
        finalZ += c;
    }
    if(finalX == 0 && finalY == 0 && finalZ == 0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}