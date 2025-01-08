#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std; 


void solve(){
    int n; cin >> n;
    vector<int> nums(n);
    for(int &x: nums) cin >> x;
    sort(nums.begin(), nums.end());
    int sum = 0, count = 0;
    for(int i = 0; i < n-1; i++){
        if(nums[i] != nums[i+1]){
            count++;
            sum += (count/3); 
            count = 0;
        } else {
        count ++;
        }
    }
    sum += (count+1) /3; 
    cout << sum << '\n';
}

int main(){
    int t; cin >> t; while(t--){
        solve();
    }
    return 0;
}