#include <bits/stdc++.h>
using namespace std;

int up(vector<int> &v, int num){
    int l = 0, r = (int)v.size() - 1;
    while(l <= r){
        int mid = l + (r-l)/2;
        if(v[mid] <= num) l = mid + 1;
        else r = mid - 1;
    }
    if (l >= v.size()) return -1;
    return v[l];
}

int low(vector<int> &v, int num){
    int l = 0, r = (int)v.size() - 1;
    while(l <= r){
        int mid = l + (r-l)/2;
        if(v[mid] >= num) r = mid - 1;
        else l = mid + 1;
    }
    if (r < 0) return -1;
    return v[r];
}

int main(){
    int N, Q; cin >> N; 
    vector<int> heights(N,-1);
    for(int &x : heights){cin >> x;}
    cin >> Q; 
    vector<int> mono(Q);
    for(int &x : mono){cin >> x;}

    int lower, upper; 
    for(auto altura : mono){
        lower = low(heights, altura);   
        upper = up(heights,altura);   
        if(lower == -1) cout << 'X' << ' ';
        else cout << lower << ' ';
        if (upper == -1) cout << 'X' << '\n';
        else cout << upper << '\n'; 
    }
}
