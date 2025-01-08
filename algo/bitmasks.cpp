#include <iostream>
#include <bitset>
using namespace std;







int main(){
    const int n = 4;
//  for(int x = 0; x < 0b1111; ) 
    for(long long x = 0; x < (1<< n); x++){
        cout << bitset<32>{x} << '\n';
    } 
    // 2^n

}