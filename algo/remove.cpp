#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std; 

int maxdigit(int n){
    int manx = 0; 
    while(n){
        manx = max(manx, n%10);
        n /= 10;
    }
    return manx;
}

int main(){
    int n; cin >> n;
    vector<int> dp(1e6 + 1);
    dp[0] = 0;
    for(int i = 1; i <= n; i++){
        if(i< 10){dp[i] = 1;}
        else{dp[i] += dp[i-maxdigit(i)]+1;}
    }
    cout << dp[n] << '\n';
    return 0;
}
