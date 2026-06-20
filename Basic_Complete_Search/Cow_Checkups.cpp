// Written by Andrew
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 7502;

int n;
int a[MAXN + 2],b[MAXN + 2],trung[MAXN + 2];

void solve(){
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
    for(int i = 1;i <= n;i++){
        cin >> b[i];
    }
    for(int l = 1;l <= n;l++){
        for(int r = l; r <= n;r++){
            vector<int> test_a(n + 1);
            for(int i = 1;i <= n;i++){
                test_a[i] = a[i];
            }
            reverse(test_a.begin() + l, test_a.begin() + r + 1);
            int cnt_trung = 0;
            for(int i = 1;i <= n;i++){
                if (test_a[i] == b[i])++cnt_trung;
            }
            trung[cnt_trung]++;
        }
    }
    for(int i = 0;i <= n;i++){
        cout << trung[i] << "\n";
    }
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