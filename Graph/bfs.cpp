// Written by Andrew
/*
Biến maxN - Kích thước mảng.
Mảng d[] - Mảng lưu lại khoảng cách từ đỉnh nguồn đến mọi đỉnh.
Mảng par[] - Mảng lưu lại vết đường đi.
Mảng visit[] - Mảng đánh dấu các đỉnh đã thăm.
Vector g[] - Danh sách cạnh kề của mỗi đỉnh.
Hàng đợi q - Chứa các đỉnh sẽ được duyệt theo thứ tự ưu tiên chiều rộng.
*/
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 1e5;

int n,m;
int d[MAXN + 2],par[MAXN + 2];
bool visited[MAXN + 2];
vector<int> g[MAXN + 2];


void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(auto y : g[x]){
            if (!visited[y]){
                par[y] = x;
                d[y] = d[x] + 1;
                visited[y] = true;
                q.push(y);
            }
        }
    }
}

void solve(){
    cin >> n >> m;
    for(int i=  1;i <= m;i++){
        int x,y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    bfs(1);
    if (!visited[6]) cout << "No path!";
    else{
        vector<int> path;
        for(int v = 1; v != -1;v = par[v]){
            path.push_back(v);
        }
        reverse(path.begin(),path.end());
        cout << "Path: ";
        for(auto v : path) cout << v << " ";
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