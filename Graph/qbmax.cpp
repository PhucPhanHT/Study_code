// Written by Andrew
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 100; 

int n,m;
int a[MAXN + 2][MAXN + 2],dp[MAXN + 2][MAXN + 2];

#define F(i,j) (i >= 1 && i <= n && j >= 1 && j <= m) ? dp[i][j] : -1e9

void solve(){
    cin >> n >> m;
    for(int i = 1;i <= n;i++) for(int j = 1;j <= m;j++) cin >> a[i][j];
    for(int i = 1;i <= n;i++) dp[i][1] = a[i][1];
    for(int j = 2;j <= m;j++){
        for(int i = 1;i <= n;i++){
            dp[j][i] = a[i][j] + max(F(i,j - 1),max(F(i - 1,j - 1),F(i + 1,j - 1)));
        }
    }
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }
    cout << dp[n][m];
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
};