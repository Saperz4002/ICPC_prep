#include <bits/stdc++.h>
using namespace std; 

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(auto &x: a){cin >> x;}
    for(auto &x: b){cin >> x;}
    int sum = 0;
    for(int i = 0; i < n-1; i++){
        if(a[i] - b[i+1] > 0){
            sum += a[i] - b[i+1]; 
        }
    }
    sum += a[n-1];
    cout << sum << '\n';
}

int main(){
    int t; cin >> t; while(t--){
        solve();
    }
    return 0;
}
