#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<vector<int>> s(3, vector<int>(3));
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> s[i][j];
        }
    }

    //light on -> 1 and light off -> 0

    vector<vector<int>> result(3, vector<int>(3, 1));
    
    vector<pair<int, int>> toChange;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(s[i][j]%2 == 1){

                toChange.push_back({i,j});

                if(i+1 < 3){    
                    toChange.push_back({i+1, j});                    
                }
                if(j+1 < 3){    
                    toChange.push_back({i, j+1});                    
                }
                if(i-1 > -1){    
                    toChange.push_back({i-1, j});                    
                }
                if(j-1 > -1){    
                    toChange.push_back({i, j-1});                    
                }
            }
        }
    }
    
    for(auto &p : toChange){
        int i = p.first;
        int j = p.second;
        // cout << "( " << i << " , " << j << " )" << endl;
        if(result[i][j] == 1){
            result[i][j] = 0;
        }else{
            result[i][j] = 1;
        }
    }

    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << result[i][j];
        }
        cout << "\n";
    }
    return 0;
}




