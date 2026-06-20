// Phuc 76DCAT21 Dai hoc cong nghe GTVT
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 1e5;

int n;
int a[MAXN + 2];

bool Find_x(int x,int l,int r){
    while(l <= r){
        int mid = (l + r) >> 1;
        if (a[mid] == x){
            return true;
        }
        else if (a[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return false;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i = 1;i <= n;i++) cin >> a[i];
    sort(a + 1,a + n + 1);
    int x;cin >> x;
    int cnt = 0;
    for(int i = 1;i <= n;i++){
        if (a[i] <= x){
            if (Find_x((x - a[i]),i + 1,n)) ++cnt;
        }
    }
    cout << cnt;
    return 0;
};