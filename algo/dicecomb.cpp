#include <iostream>
#include <bits/stdc++.h>
#include<algorithm>
using namespace std; 
int mod = 1e9 + 7;


int main(){
    vector<int> dp(1e6 + 1);
    int n; cin >> n;
    dp[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 6; j++){
            if(i - j < 0){continue;}
            (dp[i] += dp[i-j])%=mod;
        }
    }
    cout << dp[n] << '\n';
    return 0;
}