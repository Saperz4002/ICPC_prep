#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;
int maxn = 1e6 + 5;
vector<int> memo(maxn,0);

int min_coins(int m, vector<int> coins){
    int answer;
    if(memo[m] != 0){return memo[m];}
    if(m == 0){answer = 0;}
    else{
        answer = maxn;
        for( int &coin : coins){
            int subproblem = m - coin;
            if(subproblem < 0) {continue;}
            answer = min(answer, min_coins(subproblem, coins) + 1);
        }
    }
    memo[m] = answer;
    return answer;
}


int main(){
    int n,x; cin >> n >> x;
    vector<int> coins(n);
    for(int &a : coins) cin >> a;
    int ans = min_coins(x,coins);
    if(ans == maxn) cout << -1 << '\n';
    else cout << ans << '\n';
}




