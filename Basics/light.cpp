#include <bits/stdc++.h>
#include <cmath>
using namespace std;
using ll = long long;

void solve(){
    ll n; while(cin >> n && n!= 0){
        if (sqrt(n) == floor(sqrt(n))){
            cout << "yes" << '\n';
        }
        else cout << "no" << '\n';

    }
}

int main(){
    solve(); 
    return 0;
}