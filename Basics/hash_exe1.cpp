#include <bits\stdc++.h>
using namespace std;
typedef long long ll;

ll compute_hash(string const& s){
    const int p = 31; 
    const int m  = 1e9 + 9;
    ll hash_value = 0;
    ll p_pow = 1; 
    for (char c:s){
        hash_value = (hash_value + (c-'a'+1)*p_pow) % m;
        p_pow = (p_pow*p)%m;
    } 
    return hash_value;
}

vector<vector<int>> groups_identical(vector<string> const& s){
    int n = s.size();
    vector<pair<ll,int>> hashes(n);
    for(int i = 0; i < n; i++){
        hashes[i] = {compute_hash(s[i]),i};
    }
    vector<vector<int>> groups; 
    for(int i = 0; i < n-1; i++){
        if(hashes[i].first != hashes[i+1].first){
            groups.emplace_back();
        }
        groups.back().push_back(hashes[i].second);
    }
    return groups;
}

int main(){
    int n; cin >> n; 
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    vector<vector<int>> ans = groups_identical(s);
    for(vector<int>& group : ans){ cout << group[0] << ' ' << group[1] << '\n';} 
    return 0;
}




