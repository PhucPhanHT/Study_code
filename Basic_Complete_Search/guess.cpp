// Phuc 76DCAT21 Dai hoc cong nghe GTVT
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

map<string,int> cnt_guess;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("guess.in","r",stdin);
    freopen("guess.out","w",stdout);
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++){
        string name;
        cin >> name;
        int t;
        cin >> t;
        for(int j = 1;j <= t;j++){
            string x;
            cin >> x;
            cnt_guess[x]++;
        }
    }
    int cnt = 0;
    for(auto x : cnt_guess){
        
        if  (x.second > 1) ++cnt;
    }
    cout << cnt + 1;
    return 0;
};