// Phuc 76DCAT21 Dai hoc cong nghe GTVT
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 50;

int n;
int a[MAXN + 2][MAXN + 2];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            cin >> a[i][j];
        }
    }
    for(int i =1 ;i <= n;i++){
        cout << (int)sqrt(a[i][i]) << " ";
    }

    return 0;
};
