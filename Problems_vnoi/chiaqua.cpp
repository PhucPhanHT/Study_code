// Phuc 76DCAT21 Dai hoc cong nghe GTVT
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

vector<int> uoc;

// log (n)
void find_uoc(int x){
    for(int i = 1; i * i <= x;i++){
        if (x % i == 0){
            uoc.push_back(i);
            if (i != x / i) uoc.push_back(x/i);
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("CAU1.inp","r",stdin);
    freopen("CAU1.out","w",stdout);
    int x,y;
    cin >> x >> y;
    int a = max(x,y);
    find_uoc(a);
    int cnt = 0;
    int b = min(x,y);
    for(auto t : uoc){
        if (b % t == 0) ++cnt;
    }
    cout << cnt;
    return 0;
};