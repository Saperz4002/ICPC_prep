#include <bits/stdc++.h>
#include <iostream>
using namespace std; 
using ll = long long;
const ll mod = 1e9 + 7;

ll n = 2e5 + 5;
vector<vector<int>> adj(n);
vector<bool> visited(n);
vector<int> pa(n);
vector<int> circl;
vector<bool> enciclo(n);
bool found = true; 
vector<int> sub(n);

void dfs(int u,int p) {
    if (found) return;
    pa[u] = p;
    visited[u] = 1;
    for (int v:adj[u]){
        if (found) return;
        if (!visited[v]) dfs(v,u);
        else if (v != p){//el ciclo tiene a u o v
            found = true;
            while (u != v){
                enciclo[u] = 1;
                circl.push_back(u);
                u = pa[u];
            }
            enciclo[u] = 1;
            circl.push_back(u);// u es iwal a v
            return;
        }
    }
}

//otro dfs pero para el tamaño de los subarboles
int dfss(int u,int p){
    sub[u] = 1;
    for (int v:adj[u])
        if (!enciclo[v] && v != p){sub[u] += dfss(v,u);}
    return sub[u];
}

int main(){
    int t; cin >> t; while(t--){
        cin >> n; 
        found = false;
        circl.clear();
        for (int i = 1;i<=n;i++){
            adj[i].clear(),pa[i] = -1, enciclo[i] = 0,visited[i] = 0,
            sub[i] = 0;
        }

        for (int i = 1; i<=n; i++){
            int u,v; cin>>u>>v;
            adj[u].push_back(v),adj[v].push_back(u);
        }
        dfs(1,-1);
        ll ans = 1ll*n*(1ll*n-1); 
        for (int u : circl){
            dfss(u,-1);
            ll valor = sub[n];
            ans -= (valor * (valor -1))/2; 
        }
        cout << ans << '\n';
    }
    return 0;
}