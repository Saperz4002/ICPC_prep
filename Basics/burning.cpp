#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	int k;
    ll n;
	cin>>n>>k;
	int low = (n*(k-1))/k;
	for(int b=low; 1; b++) {
		int s=0;
		int a = b;
		while(a) {
			s += a;
			a /= k;
		}
		if(s >= n) {
			cout<<b<<endl;
			return 0;
		}
	}		
}