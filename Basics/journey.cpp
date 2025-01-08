#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n, a, b, c; cin >> n >> a >> b >> c;
    vector<long long> nums;
    long long N = a + b + c; 
    nums.push_back(a); 
    nums.push_back(b); 
    nums.push_back(c); 

    int cont = 3*(n/N);
    n -= N*(n/N);
    int i = 0;
    while(n>0){
        n -= nums[i];
        i++; 
    }
    cout << cont+i << '\n';
}

int main(){
    int t; cin >> t; while(t--){
        solve();
    }
    return 0;
}