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
vector<vector<int>> ans;

void dfs(int u,vector<int> &tplt){
    tplt.push_back(u);
    visited[u] = 1;
    for(int v : adj[u]){
        if (!visited[v]){
            dfs(v,tplt);
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
    for(int i = 1;i <= n;i++){
        sort(adj[i].begin(),adj[i].end());
    }   
    int cnt_ttlt = 0;
    for(int i = 1;i <= n;i++){
        if (!visited[i]){
            vector<int> tplt;
            ++cnt_ttlt;
            dfs(i,tplt);
            ans.push_back(tplt);
        }
    }

    cout << cnt_ttlt << '\n';
    for(auto tplt : ans){
        cout << (int)tplt.size() << " ";
        for(int i = 0;i < (int)tplt.size();i++){
            if (i == (int)tplt.size() - 1){
                cout << tplt[i];
            }
            else cout << tplt[i] << " ";
        }
        cout << '\n';
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