// Phuc 76DCAT21 Dai hoc cong nghe GTVT
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 1e5;

int t,n;

long long a[MAXN + 2];

bool Check(long long x){
    int l = 1,r = n;
    while(l <= r){
        int mid = (l + r) >> 1;
        if (a[mid] == x) return true;
        else if (a[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return false;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i= 1; i <= n;i++) cin >> a[i];
    sort(a + 1,a + n + 1);
    cin >> t;
    while(t--){
        long long x;cin >> x;
        if (Check(x)) cout << "Y\n";
        else cout << "N\n";
    }
    return 0;
};