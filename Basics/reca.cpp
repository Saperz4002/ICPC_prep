
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 


int segment(int low, int high, 
            int pos, int strip) 
{ 
    if (high == low) { 
        ini_seg[strip][pos] = rect[strip][low]; 
    } 
    else { 
        int mid = (low + high) / 2; 
        segment(low, mid, 2 * pos, strip); 
        segment(mid + 1, high, 2 * pos + 1, strip); 
        ini_seg[strip][pos] = ini_seg[strip][2 * pos] + 
                              ini_seg[strip][2 * pos + 1]; 
    } 
} 
  
/* 
 * A recursive function that constructs  
 * Final Segment Tree for array ini_seg[][] = { }. 
*/
int finalSegment(int low, int high, int pos) 
{ 
    if (high == low) { 
  
        for (int i = 1; i < 2 * size; i++) 
            fin_seg[pos][i] = ini_seg[low][i]; 
    } 
    else { 
        int mid = (low + high) / 2; 
        finalSegment(low, mid, 2 * pos); 
        finalSegment(mid + 1, high, 2 * pos + 1); 
  
        for (int i = 1; i < 2 * size; i++) 
            fin_seg[pos][i] = fin_seg[2 * pos][i] +  
                              fin_seg[2 * pos + 1][i]; 
    } 
} 