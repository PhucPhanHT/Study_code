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
vector<int> tt;
int pos[MAXN + 2];

void dfs(int node){
    tt.push_back(node);
    visited[node] = 1;
    for(auto neighour : adj[node]){
        if (!visited[neighour]){
            dfs(neighour);
        }
    }
}

void solve(){
    cin >> n >> m;
    vector<int> permutation(n);
    for(int i = 0;i < n;i++){
        cin >> permutation[i];
        pos[permutation[i]] = i;
    }
    for(int i = 1;i <= m;i++){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i = 1;i <= n;i++){
        sort(adj[i].begin(),adj[i].end(),[&] (int a,int b){
            return pos[a] < pos[b];
        });
    }
    dfs(1);
    if (permutation == tt) cout << 1;
    else cout << 0;
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