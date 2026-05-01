// Written by Andrew
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 2e5;

int n;
long long a[MAXN + 2];

void solve(){
    cin >> n;
    for(int i = 1;i <= n;i++) cin >> a[i];
    sort(a + 1,a + n + 1);
    long long mx = max(abs(a[1] + a[2]),abs(a[n] + a[n - 1]));
    cout << mx; 
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