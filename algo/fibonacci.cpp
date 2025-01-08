#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std; 
using ll = long long;
int memo[1000];

int saltos(int n){
    //(if(memo[n] != 0){ return memo[n];}
    if(n == 0 || n == 1){return 1;}
    else {
        //memo[n] = saltos(n-1) +saltos(n-2);
        //return memo[n];
        return saltos(n-1) +saltos(n-2);
        
    }
}

int main(){
    int n; cin >> n;
    cout << saltos(n) << '\n';
    return 0;
}








