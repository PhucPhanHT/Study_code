// Written by: Andrew
// LINK DE: https://oj.vnoi.info/problem/fcb001_ksum
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 1e5;
int a[MAXN + 2];


// SLIDING WINDOW
void solve(){
    int n,k;
    cin >> n >> k;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
    long long sum = 0;
    for(int i = 1;i <= k;i++){
        sum += a[i];
    }
    long long mx_cady = sum;
    for(int i = k + 1;i <= n;i++){
        sum = sum - a[i - k] + a[i];
        mx_cady = max(mx_cady,sum);
    }
    cout << mx_cady;
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