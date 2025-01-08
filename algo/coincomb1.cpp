#include <bits/stdc++.h>

using namespace std;

int main(){
    int mod = 1e9 + 7;
    int n, x; cin >> n >> x;
    vector<int> coins(n);
    for(int &c : coins){cin >> c;}
    vector<vector<int>> memo(x+1,vector<int>{0,0});
    memo[0] = {1,0};
    for(int i = 1; i <= x; i++){
        for(int j = 0; j < n; j++){
            if(i - coins[j] >= 0 && memo[i - coins[j]][1] == 0){
            (memo[i][0] += memo[i - coins[j]][0]) %= mod;
            memo[i - coins[j]][1] = 1;
            }
        } 
    }
    cout << memo[x][0] << '\n';

}
