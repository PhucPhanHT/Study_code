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

void bfs(int u){
    visited[u] = true;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int v : adj[u]){
            if (!visited[v]){
                par[v] = u;
                q.push(v);
            }
        }
    }
}

void path(int s,int t){
    dfs(s);
    if (!visited[t]) return (void) (cout << "Khong ton tai duong di!\n");
    vector<int> res;
    while(t != s){
        res.push_back(t);
        t = par[t];
    }
    res.push_back(t);
    reverse(res.begin(),res.end());
    for(int x : res) cout << x << " ";
}

void solve(){
    cin >> n >> m;
    for(int i = 1;i <= m;i++){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
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