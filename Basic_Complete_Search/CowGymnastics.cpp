// Phuc 76DCAT21 Dai hoc cong nghe GTVT
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif


const int MAXN = 20;

int res[MAXN + 2][MAXN + 2];
int a[MAXN + 2][MAXN + 2];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("gymnastics.in","r",stdin);
    freopen("gymnastics.out","w",stdout);
    int k,n;
    cin >> k >> n;
    for(int i =1 ; i<= k;i++){
        for(int j = 1;j <= n;j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= k;i++){
        for(int j = 1;j <= n;j++){
            for(int h = j + 1;h <= n;h++){
                res[a[i][j]][a[i][h]]++;
            }   
        }
    }
    int cnt = 0;
    for(int i = 1; i <= n;i++){
        for(int j = 1; j <= n;j++){
            if (res[i][j] == k) ++cnt;
        }
    }
    cout << cnt;
    return 0;
};