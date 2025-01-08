#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, Q; cin >> N; 
    vector<int> heights(N,-1);
    for(int &x : heights){cin >> x;}
    cin >> Q; 
    vector<int> mono(Q);
    for(int &x : mono){cin >> x;}

    vector<int>::iterator low, upp; 
    for(auto altura : mono){
        low = lower_bound(heights.begin(),heights.end(),altura);   
        upp = upper_bound(heights.begin(),heights.end(),altura);   
        if (low == heights.begin() && *(low-1) > altura){cout << 'X' << ' ';}
        else cout << *(low-1) << ' ';
        if (upp == heights.end() && *(upp-1) < altura){cout << 'X' << '\n';}
        else cout << *(upp) << '\n';
    }
}