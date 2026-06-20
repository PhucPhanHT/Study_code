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

void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(auto y : adj[x]){
            if (!visited[y]){
                visited[y] = true;
                q.push(y);
            }
        }
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
    int cnt = 0;
    for(int i = 1;i <= n;i++){
        if (!visited[i]){
            ++cnt;
            bfs(i);
        }
    }
    cout << cnt;
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