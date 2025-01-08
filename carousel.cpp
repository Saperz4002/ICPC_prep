#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std; 
using ll = long long;
const ll mod = 1e9 + 7;

int n = 2e5 + 1;
vector<vector<int>> adj(n);
vector<bool> vis(n);
vector<int> color(n,-1);

void dfs(int u){
    vis[u] = 1; 
    for (int v: adj[u]){
        if (color[v] == color[u]){
            color[v] = 3; //tmb color[u] = 3?
            continue;
        }
        if (!vis[v]){
            if(color[u] == 1) color[v] = 2;
            else if(color[u] == 2) color[v] = 1;
            else color[v] = 1; 
            //hacer el dfs
            dfs(v);
        }
    }
}

void grafo(){
    cin >> n; 
    for (int i=1; i<= n; i++){adj[i].clear(), vis[i] = 0, color[i] = -1;}
    vector<int> t(n+1);
    for (int i=1; i<= n; i++) cin >> t[i];
    for (int i= 1; i <n; i++){
        if(t[i] != t[i+1]){
            adj[i].push_back(i+1);
            adj[i+1].push_back(i);
        }
    }
    if (t[1] != t[n]){
        adj[1].push_back(n);
        adj[n].push_back(1);
    }

    for( int i = 1; i <= n; i++){
        if (!vis[i]){
            color[i] = 1; //los colores son 1, 2 o 3
            dfs(i); 
        }
    }
    int ans = 1;
    for(int i = 1; i <= n; i++) ans = max(ans, color[i]); //el color más usado
    cout << ans << '\n';
    for (int i = 1; i <= n; i++) cout << color[i] << " ";

    cout << '\n';
}

int main(){
    int t; cin >> t; while(t--){
        grafo(); //se crea el grafito
    }
    return 0;
}