// Written by Andrew
// LINK DE: https://usaco.org/index.php?page=viewproblem2&cpid=893&lang=en
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 100;

void solve(){
    int n;
    cin >> n;
    vector<vector<string>> v(n + 1);
    for(int i = 1;i <= n;i++){
        string name;
        int k;
        cin >> name >> k;
        for(int j = 1;j <= k;j++){
            string atb;
            cin >> atb;
            v[i].push_back(atb); // Luu no duoi dang 1 - thuoc tinh
        }
    }
    int mx_ans = 0;
    for(int i = 1;i <= n;i++){
        set<string> s;
        for(auto x : v[i]){
            s.insert(x); // Sort san
        }
        for(int j = i + 1;j <= n;j++){
            // So sanh
            int cnt = 0;
            for(auto x : v[j]){
                if (s.find(x) != s.end()){
                    ++cnt;
                }
            }
            mx_ans = max(mx_ans,cnt);
        }
    }
    cout << mx_ans + 1;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("guess.in","r",stdin);
    freopen("guess.out","w",stdout);
    int t;
    t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
};