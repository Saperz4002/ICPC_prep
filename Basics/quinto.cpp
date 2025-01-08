#include <bits/stdc++.h>
using namespace std; 


string solve(){
    int n; cin >> n; int distance; 
    vector<int> nums(n);
    for(int &x : nums) cin >> x; 
    for(int i=0; i < n-1; i++){
        distance = abs(nums[i]-nums[i+1]);
        if(distance != 5 && distance != 7){
            return "NO";
        }
    }
    return "YES";
}

int main(){
    
    int t; cin >> t; while(t--){
        cout << solve() << '\n';
    }
    return 0; 
}