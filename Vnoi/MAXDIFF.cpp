// Written by Andrew
// LINK DE: https://oj.vnoi.info/problem/fcb008_maxdiff
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 1e3;

int n;
int a[MAXN + 2];

void solve(){
    cin >> n;
    for(int i = 1;i <= n;i++) cin >> a[i];
    int mx_kc = 0;
    for(int i = 1;i < n;i++){
        if (i == 1){
            mx_kc = abs(a[i + 1] - a[i + 2]);
        }
        else mx_kc = max(mx_kc,max(abs(a[i] - a[i + 1]),abs(a[i - 1] - a[i + 1])));
    }
    cout << mx_kc;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
};