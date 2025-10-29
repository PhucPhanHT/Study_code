// Phuc 76DCAT21 Dai hoc cong nghe GTVT
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 1e4;

int x[MAXN + 2],y[MAXN + 2];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i = 1; i <= n;i++){
        cin >> x[i];
    }
    for(int i = 1; i <= n;i++){
        cin >> y[i];
    }
    int mx_squace = 0;
    for(int i = 1; i <= n;i++){
        for(int j = i + 1;j <= n;j++){
            int x1 = x[i] - x[j];
            int y1 = y[i] - y[j];
            int dis = x1 * x1 + y1 * y1;
            mx_squace = max(mx_squace,dis);
        }
    }
    cout << mx_squace;
    return 0;
};