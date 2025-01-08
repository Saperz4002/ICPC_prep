#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<vector<int>> a = {{6,0}, {5,0}, {4,0}, {3,2}, {2,2}, {1,4}};
vector<vector<int>> t;

int main(){
sort(a.begin(), a.end(), [](const vector<int>& x, const vector<int>& y){
        if(x[0] != y[0]) return x[0] > y[0];
        return x[1] < y[1];
    });
    for(int i = 0; i <a.size(); i++){
        t.insert(t.begin() + a[i][1], a[i]);
    }
    for (const auto& sublist: t){
        cout << "[" << sublist[0] << ", " << sublist[1] << "]";
    }
        cout << '\n';
        return 0;
}

