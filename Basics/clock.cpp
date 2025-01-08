#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>


using namespace std;


void solve(){
    int a, b, c, d; cin >> a >> b  >> c >> d; 
    string pasos;
    for(int i = 1; i <= 12; i++){
        if( i == a || i == b) {pasos += 'r';}
        if( i == c || i == d) {pasos += 'b';}        
    }
    if(pasos == "rbrb" || pasos == "brbr") cout << "YES" << '\n';
    else cout << "NO" << '\n';
}

int main(){
    int t; cin >> t; while(t--){
        solve();
    }
    return 0;
}