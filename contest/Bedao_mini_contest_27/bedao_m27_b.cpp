// Written by Andrew
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 1e5;
long long c,p,t1,t2,n1,n2;

bool check(long long x){
    long long cnt_cl = x / n1,cnt_bvmt = x / n2;
    long long phi = cnt_cl * t1 + cnt_bvmt * t2;
    return (p * x + phi <= c);
}


void solve(){
    cin >> c >> p >> n1 >> n2 >> t1 >> t2;
    long long l = 0,r = c,mx_profit = 0;
    while(l <= r){
        long long mid = (l + r) >> 1;
        if (check(mid)){
            mx_profit = max(mx_profit,mid);
            l = mid + 1;
        }
        else r = mid - 1;
    }
    cout << mx_profit;
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