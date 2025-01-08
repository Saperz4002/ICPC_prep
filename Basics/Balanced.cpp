#include <bits\stdc++.h>
#include <iostream>
using namespace std;


struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return(height(root));
        
    }
    int profiz(TreeNode* node){
        if(node == nullptr) return 0;
        return(profiz(node -> left)+1);
    }
    int profder(TreeNode* node){
        if(node == nullptr) return 0;
        return(profder(node -> right)+1);
    }
    bool height(TreeNode* node){
        if(node == nullptr) return true; 
        bool cond1 = abs(profiz(node)-profder(node)) <= 1;
        return(cond1 && height(node->left) && height(node-> right));
    }
};