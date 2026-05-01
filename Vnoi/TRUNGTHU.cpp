// Written by Andrew
// LINK DE: https://oj.vnoi.info/problem/fcb045_trungthu
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 100;

int n,m;
int a[MAXN + 2];

void solve(){
    cin >> n >> m;
    for(int i = 1;i <= n;i++) cin >> a[i];
    int mn = INT_MAX;
    for(int i = 1;i <= n;i++){
        m -= a[i];
        mn = min(mn,a[i]);
    }
    cout << n + (m / mn);
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