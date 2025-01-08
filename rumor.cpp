#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std; 
using ll = long long;

ll solve(int n, int m, vector<ll>& gold, vector<pair<ll,ll>> friends){
    ll s = 0; 
    for(auto &x : gold){ s += x;}
    vector<ll> visited(n,1);
    for(int i = 0; i < m; i++){
        ll c = friends[i].first;
        ll d = friends[i].second;
        s-= max(visited[c-1]*gold[c-1], visited[d-1]*gold[d-1]);
        visited[c-1] = 0; 
        visited[d-1] = 0;
    }
    return s; 
}

int main(){
    int n, m; cin >> n >> m;
    vector <ll> gold(n); 
    for(ll & x: gold){cin >> x;}
    vector<pair<ll,ll>> friends;

    for(int i = 0; i < m; i++){
        ll a, b; cin >> a >> b;
        friends.push_back({a,b});
    }

    cout << solve(n,m,gold,friends) << '\n';
    return 0;
}   