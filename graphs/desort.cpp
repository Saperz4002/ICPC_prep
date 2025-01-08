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
    for(ll &x : nums) cin >> x;
    ll diff = 1e9;
    for(int i = 0; i < (n-1); i++){
        if (nums[i] > nums[i+1]) return 0;
        else diff = min(diff,nums[i+1]-nums[i]);
    }
    return (diff/2.0 +1);
}
int main() {
    int t; cin >> t; while(t--){
        ll ans = solve();
        cout << ans << endl;
    }
    return 0;
}
