// Written by Andrew
// LINK DE: https://oj.vnoi.info/problem/fcb007_panda
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 1e5;

void solve(){
    float x;cin >> x;
    int tmp = (int)x;
    if (tmp == x && x > 0) cout << 'P';
    else cout << 'A';
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