// Written by Andrew
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 1e5;



void solve(){
    int n;
    cin >> n;
    vector<int> elise_log(n + 1);
    int log_sum = 0;
    for(int i = 1;i <= n;i++){
        cin >> elise_log[i];
        log_sum += elise_log[i];
    }
    //Try all possible number of hour after modification
    for(int num_hours = 0;num_hours <= log_sum;num_hours++){
        if (num_hours != 0 && log_sum % num_hours != 0){
            // The sum must be divisible by num_hours;
            continue;
        }
        bool valid = true;
        int curr_sum = 0;
        for(int x : elise_log){
            curr_sum += x;
            if (curr_sum > num_hours){ // Vuot qua 
                valid = false;
                break;
            }
            else if (curr_sum == num_hours){
                curr_sum = 0;
            }
        }
        if (valid){ // hop le
            if (num_hours == 0){
                cout << 0 << '\n';
            }
            else cout << n - (log_sum / num_hours) << '\n';
            break;
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    //t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
};