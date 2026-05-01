// Written by Andrew
// LINK DE: https://oj.vnoi.info/problem/fc137_factorial
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif


int tong_so(string s){
    int sum = 0;
    for(char x : s){
        sum += (int)(x - '0');
    }
    return sum % 3 == 0;
}

void solve(){
    string s;
    int k;
    cin >> s >> k;
    if (k == 1){
        return (void) (cout << "YES\n");
    }
    else{
        int n = (int)(s[s.size() - 1] - '0'); // so cuoi
        if (n % 2 == 0){ // chia het cho 2
            if (k == 2) return (void)(cout << "YES\n");
            if (tong_so(s)) (cout << "YES\n"); // chia cho 3
            else cout << "NO\n";
        }
        else cout << "NO\n";
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    //int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
};