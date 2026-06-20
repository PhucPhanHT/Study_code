// Written by Andrew
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 1e5;

int n;
// vector<int> subset;

// void search(int k) {
//     if (k == n) {
//     // process subset
//         for(int x : subset){
//             cout << x << " ";
//         }
//         cout << '\n';
//         return;
//     }
//     search(k+1);
//     subset.push_back(k);
//     search(k+1);
//     subset.pop_back();
// }

void solve(){
    int n;
    cin >> n;
    for(long long b = 0;b < (1 << n);b++){
        vector<long long> subset;
        for (int i = 0;i < n;i++){
            if (b & (1 << i)){
                subset.push_back(i);
            }
        }
        for(auto x : subset){
            cout << x << " ";
        }
        cout << '\n';
    }
    // search(0);
}

vector<int> permutation;
bool chosen[MAXN + 2];

void search(){
    if (permutation.size() == n){
        for(int x : permutation){
            cout << x << " ";
        }
        cout << '\n';
    }
    else{
        for(int i = 0;i < n;i++){
            if (chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(i);
            search();
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}

void solve3(){
    // Gen next permutation
    cin >> n;
    search();
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    // cin >> t;
    while(t--){
        //solve();
        solve3();
    }
    return 0;
};