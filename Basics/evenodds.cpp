#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n, k; cin >> n >> k;
    ll mid = n/2 + n%2;
    if(k <= mid) cout << 2*k-1 << endl;
    else cout << 2*(k-mid) << endl;
}

int main(){
    solve(); 
    return 0;
}

