// Written by Andrew
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 1e5;
const int DIM = 8;


void solve(){
    vector<vector<bool>> blocked(DIM,vector<bool> (DIM));
    for(int r = 0;r < DIM;r++){
        string row;
        cin >> row;
        for(int c = 0;c < DIM;c++){
            blocked[r][c] = (row[c] == '*');
        }
    }
    vector<int> queens(DIM);
    iota(queens.begin(),queens.end(),0);
    do{
        
    }while(next_permutation(queens.begin(),queens.end()));
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
};