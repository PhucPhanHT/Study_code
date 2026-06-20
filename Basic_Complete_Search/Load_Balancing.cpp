// Written by Andrew
// LINKDE: https://usaco.org/index.php?page=viewproblem2&cpid=617
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 100;

vector<pair<int,int>> a;



void solve(){
    freopen("balancing.in","r",stdin);
    freopen("balancing.out","w",stdout);
    int n,m;
    cin >> n >> m;
    for(int i = 1;i <=n;i++){
        int x,y;
        cin >> x >> y;
        a.push_back({x,y});
    }
    int mn_val = INT_MAX;
    for(auto tmp : a){
        for(auto tmp2 : a){
            int x = tmp.first + 1,y = tmp2.second + 1,m = 0,goc1 = 0,goc2 = 0,goc3 = 0,goc4 = 0;
            for(auto tmp3 : a){
                int x2 = tmp3.first,y2 = tmp3.second;
                // Dem so bo tung goc
                if (x2 > x){
                    if (y2 > y) ++goc2;
                    else ++goc3;
                }
                else{
                    if (y2 > y) ++goc1;
                    else ++goc4;
                }
            }
            m = max({goc1,goc2,goc3,goc4}); // max cua m tai 1 trong 4 o
            mn_val = min(mn_val,m);
        }
    }
    cout << mn_val;
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