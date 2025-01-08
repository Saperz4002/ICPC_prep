#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<vector<int>> a = {{6,0}, {5,0}, {4,0}, {3,2}, {2,2}, {1,4}};
int n = a.size();
vector<int> BIT(n+1,0);
vector<vector<int>> res(n,vector<int> ());


static bool cmp(vector<int>& x, vector<int>& y){
    if(x[0] != y[0]) return x[0] < y[0];
    return x[1] > y[1];
}

//funcion update
void update(int x, int value){
    for(int i = x; i <= n; i+= i & -i){
        BIT[i]+= value;
    }
}
//funcion obtener suma
int getsum(int x){
    int sum = 0;
    for(int i = x; i > 0; i -= i&-i){
        sum += BIT[i];
    }
    return sum;
}

int main(){
    for(int i = 2; i <= n; i++) {update(i, 1);}
    sort(a.begin(), a.end(), cmp);
    for(int i= 0; i < n; i++){
        int l = 0, r = n;
        while(l<r){
            int mid = l + (r-l)/2;
            if(getsum(mid + 1) < a[i][1]) l = mid + 1;
            else r = mid; 
        }
        res[l] = a[i];
        update(l+1,-1);
    }
    for (const auto& sublist: res){
            cout << "[" << sublist[0] << ", " << sublist[1] << "]";
        }
            cout << '\n';
            return 0;
}
