// Written by Andrew
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 6;

int n;
int a[MAXN + 2];

void solve(){
    vector<int> nums;
    int i = 1;
    while(i <= 5){
        cin >> a[i];
        if (a[i] == 1){
            nums.push_back(i);
        }
        ++i;
    }
    sort(nums.begin(),nums.end(),greater<int>());
    for(auto x : nums){
        cout << x;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
};