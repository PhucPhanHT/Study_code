// Written by Andrew
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 5e5;

int n;
int a[MAXN + 2];

void solve(){
    cin >> n;
    int s = 0,s1 = 0,s2 = 0,cnt_pair = 0;
    for(int i = 1;i <= n;i++){
        int x,y;
        cin >> x >> y;
        s1 += x;
        s2 += y;
        if ((x + y) % 2 != 0){
            ++cnt_pair;
        }
    }
    s = s1 + s2;
    if (s & 1) return (void) (cout << -1);
    if (s1 % 2 == 0 && s2 % 2 == 0) return (void) (cout << 0);
    if (cnt_pair > 0) cout << 1;
    else cout << -1;
    
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