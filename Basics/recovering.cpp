#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;


void solve(){
    int n; cin >> n; 
    string mini = "zzz", actual;
    for(int i = 0; i < 26; ++i){
        for(int j = 0; j < 26; ++j){
            for(int k = 0; k < 26; ++k){
                if(i+j+k+3 == n){
                    actual += char(i+'a');
                    actual += char(j+'a');
                    actual += char(k+'a');
                    mini = min(mini, actual);
                }

            }
        }
    }
    cout << mini << '\n';

}

int main(){
    int t; cin >> t; while(t--){
        solve();            
    }
}