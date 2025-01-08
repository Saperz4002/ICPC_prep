#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
int mod = 1e9 + 7;

int main(){
    int n, x; cin >> n >> x;
    vector<int> c(n);
    for(int &coin : c) cin >> coin;
    vector<int> dp(1e6 + 1);
    dp[0] = 1;
    for(int i = 0; i <n; i++){
        for(int j = 1; j <= x; j++){
            if(j - c[i] < 0){continue;}
            (dp[j] += dp[j - c[i]]) %= mod;
        }
    }
    cout << dp[x] << '\n';

}