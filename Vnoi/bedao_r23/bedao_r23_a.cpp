// Written by Andrew
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 1e5;

int cnt_q0 = 0;
int q = 0;

void solve(){
    char c;
    long long x;
    cin >> c >> x;
    cnt_q0 += (x / 100);
    if (c == 'L'){
        if ((x % 100) >= q && q != 0){ 
            ++cnt_q0;
        }
        q = (q - (x % 100) + 100) % 100; 
    }
    else {
        if ((x % 100) + q >= 100){
            cnt_q0++;
        }
        q = (q + (x % 100)) % 100;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    //t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    cout << cnt_q0;
    return 0;
};