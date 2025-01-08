#include <bits\stdc++.h>
#include <iostream>

using namespace std; 
void solve(){
    int n, m, k; cin >> n >> m >> k;
    vector<int> b(n,0);
    vector<int> c(m,0);
    for (int &x: b){cin >> x;}
    for(int &x: c){cin >> x;}
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    int count = 0;
    for(int i = 0; i <n; i++){
        for(int j = 0; j < m; j++){
            if(b[i] + c[j] > k){break;}
            count ++;
        }
    }
    cout << count << '\n';
}

int main(){
    int t; cin >> t; while(t--){
        solve();
    }
    return 0;
}