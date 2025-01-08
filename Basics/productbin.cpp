#include <bits\stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;

void solve(){
    ll n; cin >> n;
    string s=to_string(n);
    if(count(s.begin(),s.end(),'0') + count(s.begin(),s.end(),'1') == s.size()){
        cout << "YES\n";
        return;
    }
    while(n>1){
        vector<ll> v;
        ll cont = 0;
        for(ll i = 1; i <= sqrt(n); i++)
        {
            if(i != n/i && n%i == 0){
                v.push_back(i); 
                v.push_back(n/i);
            } else if (n%i == 0 && i == n/i){
                v.push_back(i);
            }
        }
        sort(v.begin(),v.end());
        v.erase(v.begin());
        reverse(v.begin(),v.end());

        for(ll i = 0; i < v.size(); i++){
            string ss = to_string(v[i]);
            if(count(ss.begin(),ss.end(),'0') + count(ss.begin(),ss.end(),'1') == ss.size()){
                n /= v[i]; 
                cont = 1;
                break;
            }
        }
        if(cont == 0) {cout << "NO\n"; return;}
    }
    cout << "YES\n";
}

int main(){
    int t; cin >> t; while(t--){
        solve();
    }
    return 0;
}



