// Phuc 76DCAT21 Dai hoc cong nghe GTVT
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

#define ll long long

const int MAXN = 20;

int n;
ll weights[MAXN + 2];

ll recurse_apples(int i,ll sum1,ll sum2){
    if (i > n) return (abs(sum1 - sum2));
    return min(recurse_apples(i + 1,sum1 + weights[i],sum2),recurse_apples(i + 1,sum1,sum2 + weights[i]));
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> weights[i];
    }
    cout << recurse_apples(1,0,0);
    return 0;
};