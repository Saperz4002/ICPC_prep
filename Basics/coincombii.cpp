#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll solve(ll n, ll x, vector<ll>& coins){
    ll mod = 1e9 + 7;
    vector<ll> dp(x+1,0);
    dp[0] = 1;

    for(int i = 0; i < n; i++){
        for(int j = coins[i]; j <= x; j++){
            dp[j] = (dp[j] + dp[j-coins[i]])%mod;
        }
    }
    return dp[x];
}

int main(){
    ll n, x; cin >> n >> x;
    vector<ll> coins(n,0);
    for(int x : coins) cin >> coins[x];
    cout << solve(n,x,coins) << '\n';

}

