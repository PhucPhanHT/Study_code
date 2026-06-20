// Written by Andrew
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 1e6;

int n;
int a[MAXN + 2];

void solve(){
    freopen("CAU2.INP","r",stdin);
    freopen("CAU2.OUT","w",stdout);
    cin >> n;
    for(int i = 1;i <= n;i++) cin >> a[i];
    sort(a + 1,a + n + 1);
    int mx_cnt = 0,cnt = 1;
    for(int i= 1;i < n;i++){
        if (a[i] == a[i + 1]){
            ++cnt;
        }
        else{
            mx_cnt = max(mx_cnt,cnt);
            cnt = 1;
        }
    }
    mx_cnt = max(mx_cnt,cnt);
    cout << mx_cnt;
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