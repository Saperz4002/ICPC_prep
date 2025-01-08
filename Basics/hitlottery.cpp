#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> bills = {100,20,10,5,1};
    int ans = 0;
    for(int &x:bills){
        while(n/x){
            ans ++;
            n -= x;
        }
    }
    cout << ans << '\n';
}