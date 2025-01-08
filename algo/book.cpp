#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    IOS;
    int n, x; cin >> n >> x;
    vector<int> prices(n);
    for( int &price : prices){cin >> price;}
    vector<int> pages(n);
    for( int &page : pages){cin >> page;}
    vector<int> dp(1e5 +1,0);
    dp[0] = 0;
    for(int i = 0; i < n; i++){ //pages
        for(int j = x; j > 0; j--){
            if(j - prices[i] < 0){continue;}
            dp[j] = max(dp[j], dp[j-prices[i]] + pages[i]);
        }
        
    }
    cout << dp[x] << '\n';



}