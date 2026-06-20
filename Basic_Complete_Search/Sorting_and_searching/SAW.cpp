// Phuc 76DCAT21 Dai hoc cong nghe GTVT
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 1e6;

/// Xac dinh do cao H lon nhat thoa man khi cat cac cay thi luong go thua = m

int n,m;
long long a[MAXN + 2];

bool check(long long x){
    // cat x
    long long sum = 0;
    for(int i = 1;i <= n;i++){
        if (a[i] > x) sum += (a[i] - x);
    }
    return (sum >= m);
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 1;i <= n;i++) cin >> a[i];
    sort(a + 1,a + n + 1);
    long long l = 0,r = a[n],ans = 0;
    // cat cang cao thi noi cang nho
    while(l <= r){
        long long mid = (l + r) >> 1;
        if (check(mid)){
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }        
    }
    cout << ans;
    return 0;
};