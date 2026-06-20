// Written by Andrew
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 100;

int n,m,t;
int a[MAXN + 2][MAXN + 2];
bool visited[MAXN + 2][MAXN + 2],is_water[MAXN + 2][MAXN + 2];
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};


void flood_ocean(int h){
    memset(is_water,0,sizeof(is_water));
    queue<pair<int,int>> q;
    for(int i = 1;i <= n;i++){
        if (a[i][1] <= h) {
            is_water[i][1] = true;
            q.push({i,1});
        }
        if (a[i][m] <= h){
            is_water[i][m] = true;
            q.push({i,m});
        }
    }
    for(int j = 1;j <= m;j++){
        if (a[1][j] <= h){
            is_water[1][j] = true;
            q.push({1,j});
        }
        if (a[n][j] <= h) {
            is_water[n][j] = true;
            q.push({n,j});
        }
    }
    while(!q.empty()){
        auto top = q.front();
        int x = top.first,y = top.second;
        q.pop();
        for(int k = 0;k < 4;k++){
            // No chua ngap, no <= muc nuoc
            int new_x = x + dx[k],new_y = y + dy[k];
            if (new_x >= 1 && new_x <= n && new_y >= 1 && new_y <= m && !is_water[new_x][new_y] && a[new_x][new_y] <= h){
                is_water[new_x][new_y] = true;
                q.push({new_x,new_y});
            }
        }
    }
}


void bfs(int i,int j){
    visited[i][j] = true;
    queue<pair<int,int>> q;
    q.push({i,j});
    while(!q.empty()){
        auto top = q.front();
        q.pop();
        int x = top.first,y = top.second;
        for(int k = 0;k < 4;k++){
            int new_x = x + dx[k], new_y = y + dy[k];
            // No chua duoc duyet va chua co nuoc
            if (new_x >= 1 && new_x <= n && new_y >= 1 && new_y <= m && !is_water[new_x][new_y] && !visited[new_x][new_y]){
                visited[new_x][new_y] = true;
                q.push({new_x,new_y});
            }
        }
    }
}

int cnt_tplt(int h){
    // Cho nuoc tran vao
    flood_ocean(h);
    // Dem so dao con lai
    memset(visited,0,sizeof(visited));
    int cnt = 0;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            if (!visited[i][j] && !is_water[i][j]){
                ++cnt;
                bfs(i,j);
            }
        }
    }
    return cnt;
}

void solve(int t){
    int mx_land = 0;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            cin >> a[i][j];
            mx_land = max(mx_land,a[i][j]);
        }
    }

    for(int h = 0;h <= mx_land;h++){
        int islands = cnt_tplt(h);

        if (islands >= 2){
            cout << "Case " << t << ": Island splits when ocean rises " << h << " feet.\n";
            return;
        }
        if (islands == 0){
            cout << "Case " << t << ": Island never splits.\n";
            return;
        }
    }
    cout << "Case " << t << ": Island never splits.\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    t = 0;
    // t = 1;
    // cin >> t;
    while(true){
        cin >> n >> m;
        if (n == 0 && m == 0) break;
        ++t;
        solve(t);
    }
    return 0;
};