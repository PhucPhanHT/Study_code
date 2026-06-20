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
int par[MAXN + 2];

void dfs(int u){
    visited[u] = true;
    for(int v : adj[u]){
        if (!visited[v]){
            par[v] = u;
            dfs(v);
        }
    }
}

/// kT chu trinh
bool dfs2(int u){
    visited[u] = true;
    for(int v : adj[u]){
        if (!visited[v]){
            par[v] = u;
            dfs(v);
        }
        else if (v != par[u]){
            return true;
        }
    }
    return false;
}

void solve(){
    cin >> n >> m;
    for(int i = 1;i <= m;i++){
        int a,b;
        cin >> a >> b;  
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    par[1] = -1;
    dfs(1);
    for(int i = 1;i <= n;i++){
        if (!visted[i]) return (void) (cout << "Khong ton tai chu trinh\n");
    }
    
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