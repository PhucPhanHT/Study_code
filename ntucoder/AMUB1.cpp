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
    int a,b;
    cin >> a >> b;
    int ans = 1;
    for(int i = 1;i <= b;++i){
        ans *= a;
        ans %= 10;
    }
    cout << ans;
    return 0;
};