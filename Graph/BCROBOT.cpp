// Written by Andrew
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 1000;
const long long MOD = (1LL << 31) - 1;


int n,m;
char table[MAXN + 2][MAXN + 2];
bool visited[MAXN + 2][MAXN + 2];
int dx1[4] = {-1,0,1,0};
int dy1[4] = {0,1,0,-1};    
long long dp[MAXN + 2][MAXN + 2];

void bfs(int i,int j){
    visited[i][j] = true;
    queue<pair<int,int>> q;
    q.push({i,j});
    while(!q.empty()){
        auto top = q.front();
        q.pop();
        int x = top.first,y = top.second;
        for(int k = 0;k < 4;k++){
            int new_x = x + dx1[k],new_y = y + dy1[k];
            if (new_x < 1 || new_x > n || new_y < 1 || new_y > n || visited[new_x][new_y] || table[new_x][new_y] != '.') continue;
            visited[new_x][new_y] = true;
            q.push({new_x,new_y});
        }
    }
}

void solve(){
    cin >> n;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            cin >> table[i][j];
        }
    }
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            if (i == 1 && j == 1) dp[i][j] = 1;
            else if(table[i][j] == '.'){
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                dp[i][j] %= MOD;
            }
            else dp[i][j] = 0;
        }
    }
    if (dp[n][n] > 0) return (void) (cout << dp[n][n] << '\n');
    bfs(1,1);
    if (visited[n][n]) cout << "THE GAME IS A LIE\n";
    else cout << "INCONCEIVABLE\n";
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