// Phuc 76DCAT21 Dai hoc cong nghe GTVT
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 1e3;

int n,m;
bool a[MAXN + 2][MAXN + 2];

int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[8] = {1, 0, -1, -1, -1, 0, 1, 1};

int find(int x,int y){
    int cnt = 0;
    for(int i = 0 ;i <= 7;i++){
        int xmoi = x + dx[i],ymoi = y + dy[i];
        if (xmoi >= 1 && xmoi <= n && ymoi >= 1 && ymoi <= m){
            cnt += a[xmoi][ymoi];
        }
    }
    return cnt;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 1; i<= n;i++){
        for(int j = 1;j <= m;j++){
            char x;
            cin >> x;
            a[i][j] = (x == '#');
        }
    }
    int cnt_house = 0,mx_tong = 0;
    for(int i = 1; i<= n;i++){
        for(int j = 1; j <= m;j++){
            if (a[i][j]) cnt_house += find(i,j);
            else mx_tong = max(mx_tong,find(i,j));
        }
    }
    cout << (cnt_house / 2) + mx_tong;
    return 0;
}; 