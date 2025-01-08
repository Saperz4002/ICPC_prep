#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    int t; cin >> t; while(t--){
        vector<int> nums(3);
        for(int &x : nums) cin >> x; 
        vector<int> curr(3,0);
        int ans = 0;
        while(curr[0] != nums[0]){
            curr[0] ++;
            curr[2] ++; 
            ans ++;
        }
        while(curr[1] != nums[1]){
            curr[1] ++;
            curr[2] ++; 
            ans ++;
        }
        if(abs(nums[2] - curr[2])%2 == 1){
            cout << -1 << '\n';
        } else {
            cout << ans << '\n';
        }
    }
}