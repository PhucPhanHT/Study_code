// Written by Andrew
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 1000;


int n,m;
bool visited[MAXN + 2][MAXN + 2];
char a[MAXN + 2][MAXN + 2];
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};


void dfs(int x,int y){
    visited[x][y] = 1;
    for(int k = 0;k < 4;k++){
        int xmoi = x + dx[k], ymoi = y + dy[k];
        if (xmoi >= 1 && xmoi <= n && ymoi >= 1 && ymoi <= m && a[xmoi][ymoi] == '.' && !visited[xmoi][ymoi]){
            dfs(xmoi,ymoi);
        }
    }
}


void solve(){
    cin >> n >> m;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            cin >> a[i][j];
        }
    }
    int cnt_room = 0;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            if (!visited[i][j] && a[i][j] == '.'){
                ++cnt_room;
                dfs(i,j);
            }
        }
    }
    cout << cnt_room;
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