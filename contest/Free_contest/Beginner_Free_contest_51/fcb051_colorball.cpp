// Written by Andrew
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 1000;

int dx[] = {-1,-1,-1,0,1,1,1,0};
int dy[] = {-1,0,1,1,1,0,-1,-1};

int m,n,k;
int a[MAXN + 2][MAXN + 2];


// void in(){
//     for(int i = 1;i <= m;i++){
//         for(int j = 1;j <= n;j++){
//             cout << a[i][j] << " ";
//         }
//         cout << '\n';
//     }
//     cout << '\n';
// }

// 1 do, 2 xanh
void solve(){
    cin >> n >> m >> k;
    for(int i= 1; i <= 2 * k;i++){
        int x,y;
        cin >> x >> y;
        if (i & 1){
            if (a[x][y] == 2) a[x][y] = 0;
            else a[x][y] = 1;
            for(int t = 0;t < 8;t++){
                int x2 = x + dx[t],y2 = y + dy[t];
                if (a[x2][y2] == 2) a[x2][y2] = 0;
                else a[x2][y2] = 1;
            }
        }
        else{
            if (a[x][y] == 1) a[x][y] = 0;
            else a[x][y] = 2;
            for(int t = 0;t < 8;t++){
                int x2 = x + dx[t],y2 = y + dy[t];
                if (a[x2][y2] == 1) a[x2][y2] = 0;
                else a[x2][y2] = 2;
            }
        }
    }
    
    int blue = 0,red = 0;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            if (a[i][j] == 1) ++red;
            else if (a[i][j] == 2) ++blue;
        }
    }
    cout << red << " " << blue << '\n';
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