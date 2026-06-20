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
    visited[u] = true;
    for(int v : adj[u]){
        if (!visited[v]){
            dfs(v);
        }
    }
}

void bfs(int u){
    visited[u] = true;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int y : adj[x]){
            if (!visited[y]){
                q.push(y);
            }
        }
    }
}


void solve(){
    cin >> n >> m;
    for(int i = 1;i <= m;i++){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int cnt_tplt = 0;
    for(int i = 1;i <= n;i++){
        if (!visited[i]){
            ++cnt_tplt;
            dfs(i);
            // bfs(i);
        }
    }
    cout << cnt_tplt;
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