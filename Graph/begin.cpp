// Written by Andrew
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 1001;

int n,m;
//int adj[MAXN + 2][MAXN + 2];
//vector<int> adj[MAXN + 2];
// vector<pair<int,int>> adj[MAXN + 2]; // co trong so;

struct Edge
{
    int a,b,w; // w duoc dung cho do thi co trong so
    Edge(int u,int v,int weight) : a(u),b(v),w(weight){}
    bool operator < (const Edge &e) const{
        return w < e.w; // Sap xep theo trong so canh
    }
};


void solve(){
    // Danh sach canh
    cin >> n >> m;
    vector<Edge> edges;
    for(int i = 1;i <= m;i++){
        int a,b,w;
        cin >> a >> b >> w;
        edges.push_back(Edge(a,b,w));
    }
    // Ma tra ke khong huong
    // for(int i = 1;i <= m;i++){
    //     int a,b;
    //     cin >> a >> b;
    //     adj[a][b] = 1;
    //     // KHong huong bo hang ben duoi
    //     adj[b][a] = 1;
    // }
    // danh sach ke
    // for(int i = 1;i <= m;i++){
    //     int x,y;
    //     cin >> x >> y;
    //     adj[x].push_back(y);
    //     // Co huong tuong tu nhu ma tran ke
    //     adj[y].push_back(x);
    // }

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