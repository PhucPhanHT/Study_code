// Phuc 76DCAT21 Dai hoc cong nghe GTVT
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 1e6;
long long a[MAXN + 2];

int t,n;

long long first_x(int x){
    long long ans = -1;
    int l = 1, r = n;
    while(l <= r){
        int mid = (l + r) >> 1;
        if (a[mid] >= x){
            ans = a[mid];
            r = mid - 1;
        }
        else l = mid + 1;
    }
    return ans;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> t;
    for(long long i = 1;i <= n;i++){
        a[i] = i * i + 1;   
    }
    sort(a + 1,a + n + 1);
    while(t--){
        long long x;cin >> x;
        int ans = first_x(x);
        if (ans == -1) cout << a[1]; // Khpng co phan tu nao >=x thi in ra thang dau tien
        else cout << first_x(x) << '\n';
    }
    return 0;
};