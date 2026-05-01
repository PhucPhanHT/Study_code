// Written by Andrew
// LINK DE: https://oj.vnoi.info/problem/fct017_dsum
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif


void solve(){
    int n;
    cin >> n;
    int sum = 0;
    while(n > 0){
        sum += (n % 10);
        n /= 10;
    }
    cout << sum;
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