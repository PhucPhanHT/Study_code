// Written by Andrew
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int n;
const int MAXN = 1e2;
int a[MAXN + 2];

// SORT_SEARCH_BASIC
void solve(){
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
    // sort(a + 1,a + n + 1);
    // cout << abs(a[1] - a[n]);
    // c2:
    int mx = INT_MIN,mn = INT_MAX;
    for(int i = 1;i <= n;i++){
        mx = max(mx,a[i]);
        mn = min(mn,a[i]);
    }
    cout << mx - mn;
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