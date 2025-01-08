#include <bits/stdc++.h>
#include <algorithm>
#include <set>
#include <string>


using namespace std;


void solve(){
    vector<int> nums(2);
    for(int &x : nums) cin >> x;
    cout << *min_element(nums.begin(), nums.end()) << " " << *max_element(nums.begin(), nums.end()) << '\n';
}

int main(){
    int t; cin >> t; while(t--){
        solve();
    }
    return 0;
}
