#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std; 
using ll = long long;

ll min(ll a, ll b)
{
 if (a < b) return a;
 else if (b < a) return b;
 return a;
}

ll solve(){
    int n; cin >> n;    
    vector<ll> nums(n); 
    for(ll &x : nums){cin >> x;}
    int s = 0;
    for (ll &x : nums){
        s += x;
    }
    ll ans = 1e9;
    for(ll &x: nums){
        if ((s - x)% 3 == 0){
            ans = 1;
        }
    
    return min((((s+3)/3.0)*3)-s, ans);
}

int main() {
    int t; cin >> t; while(t--){
        cout << solve() << '\n';
    }
}