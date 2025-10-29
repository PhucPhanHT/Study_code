// Phuc 76DCAT21 Dai hoc cong nghe GTVT
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int a[4];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 2;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if ((a + b) == c || (a +c) == b || (c + b) == a) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
};