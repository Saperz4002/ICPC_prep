#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std; 
using ll = long long;

string solve(int n, int t, vector<ll>& portals){
    ll pos = 1;
    ll i = 0;
    while(i <= n-2){
        pos += portals[i];
        if(pos == t){return "YES";}
        i = pos-1;
    }
    return "NO";
}

int main(){
    int n, t; cin >> n >> t; 
    vector<ll> portals(n);
    for(ll &x : portals) {cin >> x;}
    cout << solve(n,t,portals) << '\n';
    return 0;
}