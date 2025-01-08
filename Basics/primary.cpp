#include <bits\stdc++.h>
using namespace std;
#include <string> 

void solve(){
    string num; cin >> num;
    if(num[0] == '1' && num[1] == '0'){
        if(num[2]-'0' > 1 && num.length() == 3){cout << "YES" << '\n';  return;}
        if(num[2]-'0' > 0 && num.length() > 3){cout << "YES" << '\n';return;} 
        else cout << "NO" << '\n';
    } else {
        cout << "NO" << '\n';
    }
}

int main(){
    int t; cin >> t; while(t--){
        solve();
    }
    return 0;
}

///alternativo


