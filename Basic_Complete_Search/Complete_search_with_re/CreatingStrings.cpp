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
string s;
vector<string>permutation;
int char_count[26];
// string s,permutation;
// set<string> tt_permutation;
// bool check[MAXN + 2];


// void search(){
//     if ((int)permutation.size() == n){
//         tt_permutation.insert(permutation);
//     }
//     else{
//         for(int i = 0;i < n;i++){
//             if (check[i]){
//                 continue;
//             }
//             check[i] = true;
//             permutation.push_back(s[i]);
//             search();
//             check[i] = false;
//             permutation.pop_back();
//         }
//     }
// }



void search2(const string &curr = ""){
    if ((int)s.size() == (int)curr.size()){
        permutation.push_back(curr);
        return;
    }
    for(int i = 0;i < 26;i++){
        // For all avaliable characters
        if (char_count[i] > 0){
            char_count[i]--;
            search2(curr + (char)('a' + i));
            char_count[i]++;
        }
    }
}

// void solve(){
//     cin >> s;
//     n = (int)s.size();
//     search();
//     cout << tt_permutation.size() << '\n';
//     for(string x : tt_permutation){
//         cout << x << '\n';
//     }
// }

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