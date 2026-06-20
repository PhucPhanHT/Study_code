// Written by Andrew
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 50;

int n,m,t;
char a[MAXN + 1][MAXN + 1];
int dx[8] = {-1,-1,-1,0,1,1,1,0};
int dy[8] = {-1,0,1,1,1,0,-1,-1};
int d[MAXN + 2][MAXN + 2];

int dfs(int i,int j){
    if (d[i][j] != -1) return d[i][j];
    int mx_path = 0;
    for(int k = 0;k < 8;k++){
        int new_i = i + dx[k],new_j = j + dy[k];
        if (new_i < 1 || new_i > n || new_j > m || new_j < 1) continue;
        if (a[new_i][new_j] == (a[i][j] + 1)){
            mx_path = max(mx_path,dfs(new_i,new_j));
        }
    }
    return d[i][j] = mx_path + 1;
}

void solve(){
    memset(a,0,sizeof(a));
    memset(d,-1,sizeof(d));
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            cin >> a[i][j];
        }
    }  
    int mx_path = 0;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            if (a[i][j] == 'A'){
                mx_path = max(mx_path,dfs(i,j));
            }
        }
    }
    // for(int i = 1;i <= n;i++){
    //     for(int j = 1;j <= m;j++){
    //         cout << d[i][j] << " ";
    //     }
    //     cout << '\n';
    // }
    //cout << "Case " << t << ": " << mx_path << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    t = 0;
    // cin >> t;
    while(true){
        ++t;
        cin >> n >> m;
        if (n == 0 && m == 0) break;
        solve();
    }
    return 0;
};