#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int n,k; cin >> n >> k; 
    int low = n * (k-1)/k;
    for(int i = low; 1; i++){
        int sum = 0;
        int l = i;
        while(l){
            sum += l;
            l /= k;
        }
        if(sum >= n){ 
        cout << i << '\n';
        return 0; }
    }
}