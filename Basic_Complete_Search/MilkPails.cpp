// Phuc 76DCAT21 Dai hoc cong nghe GTVT
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("pails.in","r",stdin);
    freopen("pails.out","w",stdout);
    int x,y,m;
    cin >> x >> y >> m;
    int mx = 0;
    // tx + vy <= m;
    // => tx <= m => t <= m / x;
    for(int i = 0;i <= (m / x);i++){
        for(int j = 0; j <= (m / x);j++){
            int t = i,v = j;
            int sum = t * x + v * y;
            if (sum > m) break;
            mx = max(mx,sum);
        }
    }
    cout << mx;
    return 0;
};