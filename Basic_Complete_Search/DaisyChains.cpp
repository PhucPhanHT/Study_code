// Phuc 76DCAT21 Dai hoc cong nghe GTVT
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 1000;

int a[MAXN + 2],pre[MAXN + 2];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i =1 ; i<= n;i++){
        cin >> a[i];
        pre[i] = pre[i - 1] + a[i];
    }

    int cnt = n;
    for(int i = 1; i <= n;i++){
        for(int j = i + 1;j <= n;j++){
            double tb = pre[j] - pre[i - 1];
            tb /= (j - i + 1);
            for(int k = i;k <= j;k++){
                if (tb == a[k]){
                    ++cnt;
                    break;
                }
            }
        }
    }
    cout << cnt;
    return 0;
};