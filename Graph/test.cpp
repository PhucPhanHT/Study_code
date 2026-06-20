// Written by Andrew
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 1e5;

int n,m;
vector<int> adj[MAXN + 2];
bool visited[MAXN + 2];


void dfs(int u){
    cout << u << " ";
    visited[u] = true;
    for(auto v : adj[u]){
        if (!visited[v]) dfs(v);
    }
}

void solve(){
    cin >> n >> m;
    for(int i = 1;i <= m;i++){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);
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