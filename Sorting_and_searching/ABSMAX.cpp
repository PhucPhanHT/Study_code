// Phuc 76DCAT21 Dai hoc cong nghe GTVT
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 2e5;

int n;
int a[MAXN + 2];    

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<= n;i++) cin >> a[i];
    sort(a + 1,a + n + 1);
    int mx = max(abs(a[1] + a[2]),abs(a[n] + a[n - 1]));
    cout << mx;
    return 0;
};