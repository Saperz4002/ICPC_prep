#include <bits/stdc++.h>
#include <iostream>
using namespace std; 
using ll = long long;
const ll mod = 1e9 + 7;

int n, m, q, ans = 0;
bool vis[101], cvis[100];
vector<pair<int,int>> adj[150];

void dfs(int cur, int end, int color){
    if (vis[cur]){ return;}
    vis[cur] = 1;
    if (cur == end){ 
        ans++; 
        return;
 
    }

    for(int i = 0; i < adj[cur].size(); i++){
        if (adj[cur][i].second == color && !vis[adj[cur][i].first]){//se realiza el bssd en el color
            dfs(adj[cur][i].first, end, color);
        }
    }

}

int main(){
    cin >> n >> m; 
    int x, y, c;
    while(m--){
        scanf("%d%d%d", &x, &y, &c);
            adj[x].push_back({y,c});
            adj[y].push_back({x,c});

    }
    
    cin >> q; while(q--){
        scanf("%d%d", &x, &y);
        for (int i = 0; i < adj[x].size(); i++){
            if (!cvis[adj[x][i].second]){
                cvis[adj[x][i].second] = 1;
                dfs(x,y,adj[x][i].second);
                memset(vis, 0, sizeof vis);
            }
        }
    
        memset(cvis,0,sizeof cvis);
        cout << ans << '\n';
        ans = 0;
    }
    return 0;
}