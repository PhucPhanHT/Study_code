// Phuc 76DCAT21 Dai hoc cong nghe GTVT
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 2e5;

int n,k;
long long a[MAXN + 2];

bool check(long long x){
    int cnt = 0;
    for(int i = 1;i <= n;i++){
        cnt += (a[i] / x);
    }
    return (cnt >= k);
}

// Do dai cua doan day cang lon thi so doan day cang nho

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> k;
    for(int i = 1;i <= n;i++) cin >> a[i];
    sort(a + 1,a + n + 1);
    long long l = 1,r = a[n] ,ans = 0;
    while(l <= r){
        // Mid la do dai cua doan day
        long long mid = 1ll * (l + r) >> 1;
        if (check(mid)){
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    cout << ans;
    return 0;
};