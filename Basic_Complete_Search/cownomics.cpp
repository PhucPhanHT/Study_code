// Phuc 76DCAT21 Dai hoc cong nghe GTVT
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 100;

char a[MAXN + 2][MAXN + 2],b[MAXN + 2][MAXN + 2];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("cownomics.in","r",stdin);
    freopen("cownomics.out","w",stdout);
    int n,m;
    cin >> n >> m;
    for(int i =1 ; i <= n;i++){
        for(int j=  1; j <= m;j++){
            cin >> a[i][j];
        }
    }
    for(int i =1 ; i <= n;i++){
        for(int j=  1; j <= m;j++){
            cin >> b[i][j];
        }
    }
    // int cnt = 0;
    // for(int j = 1;j <= m;j++){
    //     int check = false;
    //     for(int i = 1;i <= n;i++){
    //         for(int k = 1;k <= n;k++){
    //             if (a[i][j] == b[k][j]) {
    //                 check = true; 
    //                 break;
                    
    //             }
    //         }
    //         if (check == true) break;
    //     }
    //     if (check == false) ++cnt;
        
    // }
    // cout << cnt;

    // cach 2 hash
    int cnt = 0;
    for(int i = 1; i <= m;i++){
        set<int> spotted_cow;
        for(int j = 1;j <= n;j++){
            spotted_cow.insert(a[j][i]);
        }
        int check = false;
        for(int j = 1;j <= n;j++){
            if (spotted_cow.count(b[j][i]) > 0){
                check = true;
                break;
            }
        }
        if (!check)++cnt;
    }
    cout << cnt;
    return 0;
};