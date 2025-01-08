#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
using ll = long long;
void solve(){
    ll n, l; cin >> n >> l;
    vector<double> a(n); 
    for (auto  &x : a) cin >> x;
    sort(a.begin(),a.end());
    double dis = a[0];
    for(ll i = 0; i < n+1; i++){
        dis = max(dis, (a[i+1]-a[i])/2);
    }
    dis = max(dis,l-a[n-1]);
    cout.precision(10);
    cout << fixed << dis << '\n';
}

int main(){
    solve();
    return 0;
}