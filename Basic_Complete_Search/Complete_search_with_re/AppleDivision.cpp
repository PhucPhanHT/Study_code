// Written by Andrew
// LINK DE: https://cses.fi/problemset/task/1623
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 20;

int n;
long long weight[MAXN + 2];

long long Try(int idx,long long sum,long long sum2){
    if (idx > n){
        return abs(sum - sum2);
    }
    return min(Try(idx + 1,sum + weight[idx],sum2),Try(idx + 1,sum,sum2 + weight[idx]));
}

void solve(){
    cin >> n;
    for(int i = 1;i <= n;i++) cin >> weight[i];
    cout << Try(1,0,0);
}


void solve2(){
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> weight[i];
    }
    
    long long ans = INT64_MAX;
    for(int b = 0;b < (1 << n);b++){
        long long sum1 = 0,sum2 = 0;
        for(int i = 0;i < n;i++){
            if (b & (1 << i)){
                sum1 += weight[i];
            }
            else sum2 += weight[i];
        }
        ans = min(ans,abs(sum1 - sum2));
    }
    cout << ans;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    // cin >> t;
    while(t--){
        solve2();
    }
    return 0;
};