#include<bits/stdc++.h>
#include<string>
#include <iostream>
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int cond = 0;
    for(int i = 0; i < s.size()/2; i++){
        if (s[i] > s[s.size()-i-1]){cond = 1; break;}
        if (s[i] < s[s.size()-i-1]){cond = 0; break;}
    }
        if (cond == 0){cout << s << "\n";}
        else{
            string c = s;
            reverse(c.begin(),c.end());
            cout << c << s << "\n";
        }
    }


int main(){
    int t; cin >> t; while(t--){
        solve();
    }
    return 0; 

}