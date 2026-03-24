#include <bits/stdc++.h>

using namespace std;

int main(){
    int year;
    cin >> year;
    year++;
    string s = to_string(year);
    bool t1 = s[0] - s[1] != 0;
    bool t2 = s[0] - s[2] != 0;
    bool t3 = s[0] - s[3] != 0;
    bool t4 = s[1] - s[2] != 0;
    bool t5 = s[1] - s[3] != 0;
    bool t6 = s[2] - s[3] != 0;
    while(!(t1 && t2 && t3 && t4 && t5 && t6)){
        year++;
        s = to_string(year);
         t1 = s[0] - s[1] != 0;
         t2 = s[0] - s[2] != 0;
         t3 = s[0] - s[3] != 0;
         t4 = s[1] - s[2] != 0;
         t5 = s[1] - s[3] != 0;
         t6 = s[2] - s[3] != 0;
    }
    cout << year << endl;
    return 0;
}