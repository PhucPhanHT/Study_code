// Phuc 76DCAT21 Dai hoc cong nghe GTVT
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 1e5;

int n,k;
int a[MAXN + 2];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("diamond.in","r",stdin);
    freopen("diamond.out","w",stdout);
    cin >> n >> k;
    for(int i =1 ; i<= n;i++) cin >> a[i];
    sort(a + 1,a + n + 1);
    int mx = 0;
    for(int i = 1; i <= n;i++){
        int cnt = 1;
        for(int j = i + 1;j <= n;j++){
            if ((a[j] - a[i]) <= k) ++cnt;
            else break;
        }
        mx = max(mx,cnt);
    }
    cout << mx;
    return 0;
};