// Phuc 76DCAT21 Dai hoc cong nghe GTVT
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 1e5;
int n,t;
long long a[MAXN + 2];

long long lower(long long x){
    long long ans = -1;
    int l = 1,r = n;
    while(l <= r) {
        int mid = (l + r) >> 1;
        if (a[mid] <= x){
            ans = a[mid];
            l = mid + 1;
        }
        else r = mid - 1;
    }
    return ans;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<= n;i++) cin >> a[i];
    sort(a + 1,a + n + 1);
    cin >> t;
    while(t--){
        long long x;cin >> x;
        //cout << lower(x) << '\n';
        auto it = upper_bound(a + 1,a + n + 1,x);
        if (it == (a + 1)){
           cout << -1 << '\n';
        }
        else {
            --it;
            cout << *it << '\n';
        }
    }
    return 0;
};