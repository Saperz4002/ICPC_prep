#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std; 
using ll = long long;
const ll mod = 1e9 + 7;

int main(){
    int t; cin >> t; while(t--){
        int n, q; cin >> n >> q;
        vector<vector<vector<int>>> adj(n+1);
        while (q--){
            string tipo;
            int u, v; cin >> u >> v >> tipo;
            if (tipo == "imposter"){
                adj[u].push_back({v,1});
                adj[v].push_back({u,1});
            } 
            else{
                adj[u].push_back({v,2});
                adj[v].push_back({u,2});                
            }//las aristas tuenen colores opuestos, o iguales
        }
    vector<int> color(n+1,-1); //sin visitar
    queue<int> Q;

    int ans = 0;
    bool nop = false;
    for (int i = 1; i <= n; i++){
        int color1 = 0;
        int color2 = 0;

        if (color[i] == -1){//sin visitar
            Q.push(i);
            color[i] = 1;

            while (!Q.empty()){
                int u = Q.front();

                if(color[u] == 1){color1++;}
                else color2++;
            
                Q.pop();

                for(auto val:adj[u]){
                    int v = val[0], tipo = val[1];
                    if (color[v] != -1){ //v visitao
                        if(tipo == 1 && color[v] == color[u]) nop = true;  
                        if(tipo == 2 && color[v] != color[u]) nop = true;

                        continue;

                    }
                    if(tipo == 1) color[v] = 3 - color[u];
                    else color[v] = color[u]; //tienen el mismo colorss

                    Q.push(v);
                


                }

            }
            ans += max(color1,color2); //que color aparece más
        }
    }
    if(nop) cout << -1 << '\n';
    else cout << ans << '\n';
}
return 0;
}