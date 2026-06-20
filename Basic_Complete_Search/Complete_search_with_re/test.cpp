// Written by Andrew
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

#define piii pair<pair<int,int>,int>
#define fi first
#define se second

const int MAXN = 1e5;


vector<piii> a;


bool cmp(piii x,piii y){
    if (x.second < y.second) return true;
    if (x.second == y.second){
        if (x.first.first < x.first.first) return true;
        else if (x.first.first == y.first.first){
            return x.first.second < y.first.second;
        }
    }
    return false;
}

void solve(){
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++){
        int x,y;
        cin >> x >> y;
        int dis = x * x + y * y;
        a.push_back({{x,y},dis});
    }
    sort(a.begin(),a.end(),cmp);
    for(auto x : a){
        cout << x.first.first << " " << x.first.second << '\n';
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