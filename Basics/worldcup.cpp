#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int operation(int number, int n, int k){
    int bk = k, t = 0; 
    while(bk + n*t < number){
        t++;
    }
    return t;
}


void solve(){
    int n; cin >> n;
    vector<int> nums(n);
    vector<int> b(n);
    for(int &x : nums) cin >> x;
    for(int i = 0; i < n; ++i){
        b[i] = operation(nums[i], n, i);
    }
    vector<int>::iterator ans = min_element(b.begin(), b.end());
    cout << distance(b.begin(), ans) + 1 << '\n';
}

int main(){
    solve();
    return 0;
}