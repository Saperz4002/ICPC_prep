#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
using ll = long long;

void solve(){
    int n; cin >> n; 
    int sum = 0;
    vector<ll> a(n);
    for(ll &x : a){
        cin >> x;
        sum += x; }
    if(n == 1){
        cout << "YES" << '\n';
        return;}
    ll prom = sum / n;
    ll exceso = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] - prom < 0 && (-a[i] + prom) > exceso) {
            cout << "NO" << '\n';
            return;
        }
        exceso += a[i] - prom;
    }
    cout << "YES" << '\n';

}

int main(){
    int t; cin >> t; while(t--){
        solve();            
    }
}