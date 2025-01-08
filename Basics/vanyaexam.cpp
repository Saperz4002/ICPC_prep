#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
using ll = long long;

void solve(){
    ll n, r, avg; cin >> n >> r >> avg;
    ll sum = 0;
    vector<pair<ll,ll>> ab(n);
    for(int i = 0; i < n; i++){
        scanf("%d%d", &ab[i].second, &ab[i].first);
        sum += ab[i].second;
    }
    sort(ab.begin(), ab.end());

    ll num = 0;
    ll points = avg*n;
    int i = 0;
    if(sum >= points) cout << 0 << '\n';
    else{
        while(sum < points){
            ll cond = min(points - sum, r-ab[i].second);
            sum += cond;
            num += cond*ab[i].first;
            i++;
        }
        cout << num << '\n';
    }
}

int main(){
    solve();
    return 0;

}