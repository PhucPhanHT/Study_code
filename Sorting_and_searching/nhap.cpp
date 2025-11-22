// Written by Andrew
//#pragma GCC optimize("O3,unroll-loops")
//#pragma GCC target("popcnt,lzcnt,bmi,bmi2,abm")
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

#define FOR(i,a,b) for(int i = (a);i <= (b);++i)
#define FOD(i,b,a) for(int i = (b);i >= (a);--i)
#define REP(i,a,b) for(int i = (a) ;i < (b);++i)
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define NAME "TASK"
#define ll long long
#define ii pair<int,int>
#define getbit(x,y) ((x) >> (y) & 1);

const int MAXN = 2e5;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    if (fopen(NAME".inp","r")){
        freopen(NAME".inp","r",stdin);
        freopen(NAME".out","w",stdout);
    }
    int n,m;
    cin >> n >> m;
    cout << n + m;
};
/**"Genius is 1% talent and 99% percent hard work" - Albert Einstein**/