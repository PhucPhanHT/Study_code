// Phuc 76DCAT21 Dai hoc cong nghe GTVT
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

// int dx[] = {-1,-2,-2,-1,1,2,2,1};
// int dy[] = {-2,-1,1,2,2,1,-1,-2};

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int xk,yk,xp,yp;
    cin >> xk >> yk >> xp >> yp;
    //C1
    // for(int i = 0;i < 8;i++){
    //     int xpmoi = xk + dx[i];
    //     int ypmoi = yk + dy[i];
    //     if (xpmoi == xp && ypmoi == yp){
    //         cout << "Yes\n";
    //         return 0;
    //     }
    // }
    // cout << "No\n";
    //C2:
    if (abs(xk - xp) + abs(yk - yp) == 3) cout << "Yes\n";
    else cout << "No"; 
    return 0;
};