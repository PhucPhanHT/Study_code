// Phuc 76DCAT21 Dai hoc cong nghe GTVT
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42`
#endif

const int MAXN = 100;

int n;
int startT[MAXN + 2],endT[MAXN + 2];
int cnt[1002];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("lifeguards.in","r",stdin);
    freopen("lifeguards.out","w",stdout);
    cin >> n;
    for(int i = 1; i <= n;i++){
        cin >> startT[i] >> endT[i];
        for(int k = startT[i];k < endT[i];k++) cnt[k]++;
    }
    int mx_amr = 0;     
    for(int i = 1;i <= n;i++){
        int amr = 0;
        // Tru
        for(int k = startT[i];k < endT[i];k++){
                cnt[k]--;
        }
        for(int j = 1;j <= 1001;j++){
            if (cnt[j] > 0) ++amr;
        }
        for(int k = startT[i];k < endT[i];k++){
                cnt[k]++;
        }
        mx_amr = max(mx_amr,amr);
    }
    cout << mx_amr;
    return 0;
};