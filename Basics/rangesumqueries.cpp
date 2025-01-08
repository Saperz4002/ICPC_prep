#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 

class NumArray {
public:
    int n; 
    vector<int> st; 
    vector<int> vals;
    NumArray(vector<int>& nums): n(nums.size()), st(4*nums.size(),0) {
        
    }
    
    void build(int node, int start, int end){
        if(start == end){
            st[node] = vals[start];
            return;
        }
        int mid = start + (end - start)/2;
        build(2*node, start, mid);
        build(2*node+1,mid+1, end);
        st[node] = st[2*node] + st[2*node +1];
    }


    void update(int index, int val) {
        
    }
    
    int sumRange(int left, int right) {
        
    }
}
