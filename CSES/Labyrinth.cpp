// Written by Andrew
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 1000;
const int dx[4] = {-1,0,0,1};
const int dy[4] = {0,-1,1,0};
const char ch[4] = {'U','L','R','D'};

#define pii pair<int,int>

int n,m;
char a[MAXN + 2][MAXN + 2];
bool visited[MAXN + 2][MAXN + 2];
int d[MAXN + 2][MAXN + 2];
vector<vector<char>> ans;
vector<char> tmp;
char luu[MAXN + 2][MAXN + 2];
pii vet[MAXN + 2][MAXN + 2];
pii t_start,t_end;


void bfs(int x,int y){
    visited[x][y] = true;
    queue<pii> q;
    q.push({x,y});
    while(!q.empty()){
        pii top = q.front();
        q.pop();
        int xcu = top.first,ycu = top.second;
        for(int k = 0;k < 4;k++){
            int xmoi = xcu + dx[k],ymoi = ycu + dy[k];
            if (xmoi >= 1 && xmoi <= n && ymoi >= 1 && ymoi <= m && a[xmoi][ymoi] != '#' && !visited[xmoi][ymoi]){
                d[xmoi][ymoi] = d[xcu][ycu] + 1;
                luu[xmoi][ymoi] = ch[k];
                vet[xmoi][ymoi] = {xcu,ycu};
                visited[xmoi][ymoi] = true;
                if (xmoi == t_end.first && ymoi == t_end.second){
                    return;
                }
                q.push({xmoi,ymoi});
            }
        }
    }
}

void solve(){
    cin >> n >> m;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            cin >> a[i][j];
            if (a[i][j] == 'A'){
                t_start = {i,j};
            }
            if (a[i][j] == 'B'){
                t_end = {i,j};
            }
        }
    }
    bfs(t_start.first,t_start.second);
    if (!visited[t_end.first][t_end.second]) return (void) (cout << "NO\n");
    string ans = "";
    auto pos = t_end;
    while(pos != t_start){
        auto [r,c] = pos;
        ans += luu[r][c];
        pos = vet[r][c];
    }
    cout << "YES\n";
    cout << d[t_end.first][t_end.second] << '\n';
    reverse(ans.begin(),ans.end());
    cout << ans << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
};