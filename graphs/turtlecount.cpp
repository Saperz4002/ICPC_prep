#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std; 
using ll = long long;

int solve(){    
    vector<ll> ab(2); 
    for(ll &i : ab){cin >> i;}
    int l; cin >> l;
    ll p = 1;
    for(ll &i : ab){
        ll factos = 1;
        while(l % i == 0){
            factos ++;
            l = l/i;
        }
        p *= factos;
    }
    return p;
}

int main(){
    int t; cin >> t; while(t--){
        cout << solve() << '\n';
    }
}