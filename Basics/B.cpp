#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std; 


void solve(){
    int n, k; cin >> n >> k;
    if(n==1) {
        cout << k << '\n';
        return;
        }
    int inicio = 1, z = log2(k);
    int t = 1 << z; 
    cout << (t-1) << " ";
    cout << (k-(t-1)) << " ";
    for(int i = 2; i < n; i++){
        cout << "0" << " ";
    }
    cout << "\n ";
}

int main(){
    int t; cin >> t; while(t--){
        solve();
    }
    return 0;
}