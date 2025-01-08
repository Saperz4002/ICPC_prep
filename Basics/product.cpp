#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
using ll = long long;

int main(){
    string n1, n2; while(cin >> n1){
        cin >> n2; 
        reverse(n1.begin(),n1.end());
        reverse(n2.begin(),n2.end());
        int prod[505];
        memset(prod,0,sizeof(prod));
        for (int i = 0; i<n1.size(); i++){
            for(int j = 0; j<n2.size(); j++){
                prod[i+j] += (n1[i]-'0')*(n2[j] - '0');
            }
        }
        for(int i = 0; i < 505; i++){
            prod[i+1] += prod[i] /10;
            prod[i] %= 10;
        }
        int index = 504;
        while(index > 0 && prod[index] == 0) index--;
        for(;index >= 0; index--) cout << prod[index];
        cout << '\n';
    }
}
