#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std; 
using ll = long long;

int solve(){
    int n; cin >> n;    
    vector<ll> nums(n); 
    for(ll &x : nums){cin >> x;}
    ll s = 0;
    for (ll &x : nums){
        s += abs(x);
    }
    return s;
}

int main(){
    int t; cin >> t; while(t--){
        cout << solve() << '\n';
    }
}
