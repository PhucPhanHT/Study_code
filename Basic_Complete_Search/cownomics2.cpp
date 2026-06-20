// Written by Andrew
// LINKDE: https://usaco.org/index.php?page=viewproblem2&cpid=739
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 500;


int n,m;
int spotted[MAXN + 2][MAXN + 2],planed[MAXN + 2][MAXN + 2];
const map<char, int> GENOME_ID{{'A', 0}, {'T', 1}, {'C', 2}, {'G', 3}}; // Dung hash

void solve(){
    // freopen("cownomics.in","r",stdin);
    // freopen("cownomics.out","w",stdout);
    cin >> n >> m;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            char x;
            cin >> x;
            spotted[i][j] = GENOME_ID.at(x);
        }
    }
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            char x;
            cin >> x;
            planed[i][j] = GENOME_ID.at(x);
            // if (x == 'A') planed[i][j] = 0;
            // else if (x == 'C') planed[i][j] = 1;
            // else if (x == 'G') planed[i][j] = 2;
            // else planed[i][j] = 3;
        }
    }
    int valid_sets = 0;
    for(int a = 1;a <= m - 2;a++){
        for(int b = a + 1;b <= m - 1;b++){
            for(int c = b + 1;c <= m;c++){
                vector<bool> checked(64); // Check trung lap gen
                for(int sc = 1;sc <= n;sc++){
                    int total = spotted[sc][a] * 16 + spotted[sc][b] * 4 + spotted[sc][c] * 1; // Dung kthu he 4
                    checked[total] = true;
                }
                int valid = true;
                for(int pc = 1;pc <= n;pc++){
                    int total = planed[pc][a] * 16 + planed[pc][b] * 4 + planed[pc][c] * 1;
                    if (checked[total]){ // 1 gen bi dinh dom
                       valid = false; 
                    }
                }
                valid_sets += valid;
            }
        }
    }
    cout << valid_sets;
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