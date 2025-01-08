#include <bits/stdc++.h>
#include <iostream>
using namespace std; 
using ll = long long; 
ll mod = 1000000000;
vector<pair<ll,ll>> t;


void build(vector<ll> nums, ll v,ll tl, ll tr){
    if(tl == tr) {
        t[v] = {nums[tl],0};0
    } else {
        ll tm = (tl+tr)/2;
        build(nums,2*v, tl, tm);
        build(nums,2*v, tl, tm);
        t[v] = {(t[2*v].first + t[2*v+1].first)%mod,0};
    }
}

void update( ll v,ll tl, ll tr, ll l , ll r, ll add){
    if(l>r) return;
    if(l == tl && r == tr) {(t[v].second= add)%= mod;}
    else{
        ll tm = (tl + tr)/2;
        update(2*v,tl,tm,l,min(r,tm),add);
        update(2*v+1,tm+1,tr,l,max(l,tm+1),add);
    }
}

ll que(ll v, ll tl, ll tr, ll l, ll r){

    
}



int main(){
    ll n, q; cin >> n >> q;
    vector<ll> nums(n);
    for(ll &x : nums) cin >> x;
    t.assign(4*n, {0,0});








}