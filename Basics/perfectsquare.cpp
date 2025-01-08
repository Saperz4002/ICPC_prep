#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
#define all(arr) arr.begin(), arr.end()

void solve(){
    int n; cin >> n; 
    int sum = 0;
    vector<string> M(n);

    for(auto &x : M){ cin >> x;}
    for(int i = 0; i < n/2; i++){
        for(int j = 0; j < n/2; j++){
            vector<char> letters(4);
            letters[0] = (M[i][j]);
            letters[1] = (M[n-i-1][n-j-1]);
            letters[2] = (M[n-j-1][i]);
            letters[3] = (M[j][n-i-1]);
            char c = *max_element(all(letters));
            for(char letter : letters){
                sum += c - letter;
            }
        }
    }
    cout << sum << '\n';
}


int main(){
    int t; cin >> t; while(t--){
        solve();
    }
}