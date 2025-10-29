// Phuc 76DCAT21 Dai hoc cong nghe GTVT
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif


const int MAXN = 2e5;

// X[n] = a[n];
// X[i] = min(X[i + 1] - 1,a[i]);

int n;
int a[MAXN + 2],x[MAXN + 2];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i = 1;i <= n;i++) cin >> a[i];
    x[n] = a[n];
    for(int i = n - 1;i >= 1;i--){
        x[i] = min(x[i + 1] - 1,a[i]);
        if (x[i] < 0) x[i] = 0;
    }
    long long ans = 0;
    for(int i = 1;i <= n;i++){
        ans += x[i];
    }
    cout << ans;
    return 0;
};  