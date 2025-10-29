// Phuc 76DCAT21 Dai hoc cong nghe GTVT
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif


const int MAXN = 1000;

vector<pair<int,char>> p;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i = 1;  i<= n;i++){
        char x;
        cin >> x;
        int y;cin >> y;
        p.push_back({y,x});
    }
    sort(p.begin(),p.end());
    int mn_cnt = INT_MAX,l = 0;
    for(int i = 0;i < n;i++){
        int cnt = l;
        if (p[i].second == 'L') ++l;
        for(int j = i + 1;j < n;j++){
            if (p[j].second == 'G') ++cnt;
        }
        mn_cnt = min(mn_cnt,cnt);
    }
    cout << mn_cnt;
    return 0;
};