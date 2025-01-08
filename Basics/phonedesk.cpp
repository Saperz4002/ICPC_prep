#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t; cin >> t; while(t--){
        int x, y; cin >> x >> y;
        int ans = (y+1)/2;
        x -= 15*ans - 4*y;
        ans += (max(x,0) + 15 - 1) / 15;
        cout << ans << '\n';
    }

}