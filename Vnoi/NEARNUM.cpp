// Written by: Andrew
// LINK DE: https://oj.vnoi.info/problem/fcb039_nearnum
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

bool check_sumdigit(int x){
    int sum = 0;
    while(x > 0){
        sum += (x % 10);
        x /= 10;
    }
    return sum % 4 == 0;
}

void solve(){
    int n;
    cin >> n;
    while (true)
    {
        if (check_sumdigit(n)) return (void) (cout << n);
        ++n;
    }
    
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
};