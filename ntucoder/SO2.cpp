// Phuc 76DCAT21 Dai hoc cong nghe GTVT
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

long long sum_uoc(long long n){
    long long sum = 0;
    for(long long i = 1;i * i <= n;i++){
        if (n % i == 0){
            sum += i;
            if (i != n /i) sum += n / i;
        }
    }
    return sum;
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin >> n;
    cout << sum_uoc(n);
    return 0;
};