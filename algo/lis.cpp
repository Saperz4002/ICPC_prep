#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    vector<int> nums;
    int l = 0, x;
    while(cin >> x){
        l ++;
        nums.push_back(x);
    }
    for(int &x : nums) cout << x << '\n';
    return 0;
}