// Phuc 76DCAT21 Dai hoc cong nghe GTVT
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 2e5;

int n,m,k;
int a[MAXN + 2],b[MAXN + 2];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m >> k;
    for(int i = 1;i <= n;i++) cin >> a[i];
    for(int i = 1; i <= m;i++) cin >> b[i];
    sort(a + 1,a + n + 1);
    sort(b + 1,b + m + 1);
    int i = 1,j = 1,cnt = 0;
    while(i <= n && j <= m){
        // Do chenh lech khong qua k
        if (abs(a[i] - b[j]) <= k){
            ++cnt;++i;++j;
        }
        else{
            if (a[i] > b[j]) ++j;
            else ++i;
        }
    }
    cout << cnt;
    return 0;
};