#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
using namespace std;
using ll = long long;

int main(){
    double p0x, p0y; while(cin >> p0x){
        double p1x, p1y, p2x, p2y, p3x,p3y;
        cin >>p0y>>p1x>>p1y>>p2x>>p2y>>p3x>>p3y;
        double deltax = p3x -p2x, deltay = p3y - p2y;
        double px = p0x + deltax, py = p0y + deltay; 
        cout.precision(3);
        cout << fixed <<  px << ' ' << py;
    }
    return 0;
}