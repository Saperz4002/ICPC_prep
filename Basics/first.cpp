#include <bits/stdc++.h>
#include <algorithm>

using namespace std;


void solve(){
    vector<int> nums(2);
    for(int &x : nums) cin >> x;
    cout << nums[0] << nums[1] << '\n';

}

int main(){
    int t; cin >> t; while(t--){
        solve();
    }
    return 0;
}
