// Written by Andrew
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 1e4;

int n,m;
vector<int> adj[MAXN + 2];
bool visited[MAXN + 2];
vector<pair<int,int>> edges;

void dfs(int u){
    visited[u] = true;
    for(int v : adj[u]){
        if (!visited[v]){
            dfs(v);
        }
    }
}

void dfs2(int u,int s,int t){
    visited[u] = true;
    for(int v : adj[u]){
        if ((u == s && v == t) || (v == s && u == t)) continue; // Canh can xoa
        if (!visited[v]){
            dfs2(v,s,t);
        }
    }
}

int tplt(){ // V * (V + E)
    int cnt = 0;
    for(int i = 1;i <= n;i++){
        if (!visited[i]){
            ++cnt;
            dfs(i);
        }
    }
    return cnt;
}

int tplt2(int s,int t){ //  (V + E)
    int cnt = 0;
    for(int i = 1;i <= n;i++){
        if (!visited[i]){
            ++cnt;
            dfs2(i,s,t);
        }
    }
    return cnt;
}

int canh_cau(){
    int cc = tplt2(-1,-1);
    int cnt_cc = 0;
    for(auto e : edges){
        int s = e.first, t = e.second;
        memset(visited,0,sizeof(visited));
        if (cc < tplt2(s,t)) ++cnt_cc;
    }
    return cnt_cc;
}

int khop(){
    int k = tplt(),cnt_k = 0;
    for(int i = 1;i <= n;i++){
        memset(visited,0,sizeof(visited));
        visited[i] = true;
        if (k < tplt()) ++cnt_k;
    }
    return cnt_k;
}

void solve(){
    cin >> n >> m;
    for(int i = 1;i <= m;i++){
        int a,b;
        cin >> a >> b;
        edges.push_back({a,b});
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cout << khop() << " ";
    memset(visited,0,sizeof(visited));
    cout << canh_cau();
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