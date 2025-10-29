// Phuc 76DCAT21 Dai hoc cong nghe GTVT
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 2e5;

int n,x;
int p[MAXN + 2];


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> x;
    for(int i =1 ; i <= n;i++) cin >> p[i];
    sort(p + 1,p + n + 1);
    int l = 1,r = n,cnt = 0;
    while(l <= r){
        if ((p[l] + p[r]) <= x){
            ++l;--r;
        }
        else --r;
        ++cnt;
    }
    cout << cnt;
    return 0;
};