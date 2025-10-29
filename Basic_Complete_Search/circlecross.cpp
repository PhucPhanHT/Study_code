// Phuc 76DCAT21 Dai hoc cong nghe GTVT
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

vector<pair<int,int>> a(26);

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("circlecross.in","r",stdin);
    freopen("circlecross.out","w",stdout);
    string s;
    cin >> s;
    vector<int> start(26,-1);
    vector<int> end(26,-1);
    int n = (int) s.size();
    for(int i = 0 ; i < n;i++){
        if (start[s[i] - 'A'] == - 1){
            // Xuat hien dau tien
            start[s[i] - 'A'] = i;
        }
        else end[s[i] - 'A'] = i;
    }
    // Dieu kien: starti < startj < endi < endj
    int total_pair = 0;
    for(int i = 0; i< 26;i++){
        for(int j = 0;j < 26;j++){
            if (start[i] < start[j] && end[i] < end[j] && start[j] < end[i]) ++total_pair;
        }
    }
    cout << total_pair << '\n';
    // int cnt = 0;
    // // a1 < b1 < a2 < b2
    // int n = (int)s.size();
    // for(int a1 = 0;a1 < n;a1++){
    //     for(int b1 = a1 + 1;b1 < n;b1++){
    //         for(int a2 = b1 + 1; a2 < n;a2++){
    //             for(int b2 = a2 + 1;b2 < n;b2++){
    //                 if (s[a1] == s[a2] && s[b1] == s[b2]){
    //                     ++cnt;
    //                 }
    //             }
    //         }
    //     }
    // }
    // cout << cnt;
    
    return 0;
}; 