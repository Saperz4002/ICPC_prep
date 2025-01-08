#include <iostream>
#include <vector>
#include <string>

using namespace std;

void get_max_depth(int root, vector<vector<int>> &neighbors, vector<bool> &visited, int curr_depth, int &max_depth){
    max_depth = max(max_depth,curr_depth);
    visited[root] = true; 
    for(int child : neighbors[root]){
        if (visited[child]) {continue;}
        get_max_depth(child, neighbors, visited, curr_depth+1, max_depth);
    }
    visited[root] = false;
}


void solve(){
    int n; cin >> n;
    vector<string> genre(n);
    vector<string> writer(n);
    for(int i=0; i< n; i++){
        cin >> genre[i] >> writer[i];
    }
    vector<vector<int>> neighbors(n);
    for(int i = 0; i <n; i++){
        for(int j=0; j < n; j++){
            if(genre[i] == genre[j] || writer[i] == writer[j]){
                neighbors[i].push_back(j);
                neighbors[j].push_back(i);
            }
        }
    }
    int max_depth = 0;
    vector<bool> visited(n,false);
    for(int i= 0; i <n; i++){
        get_max_depth(i,neighbors, visited, 0, max_depth);
    }
    cout << n - (max_depth + 1) << '\n';
}

int main(){
    int t; cin t; while(t--){
        
    }
}