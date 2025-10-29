// Phuc 76DCAT21 Dai hoc cong nghe GTVT
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 100;

int n;
int X[MAXN + 2], Y[MAXN + 2];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // freopen("triangles.in","r",stdin);
    // freopen("triangles.out","w",stdout);
    cin >> n;
    for(int i = 1; i <= n;i++){
        cin >> X[i] >> Y[i];
    }
    int ans_acr = 0;
    for(int i = 1; i <= n;i++){
        for(int j = 1; j <= n;j++){
            for(int k = 1;k <= n;k++){
                if (X[i] == X[j] && Y[i] == Y[k]){
                    int acr = abs((Y[i] - Y[j]) * (X[i] - X[k]));
                    ans_acr = max(ans_acr,acr); 
                }
            }
        }
    }
    cout << ans_acr << "\n";
    return 0;
};