/*
 * Created on Fri May 08 2020
 *
 * Title: Leetcode - Learn - Maximum Depth of Binary Tree
 *    
 * Author: Vatsal Mistry
 * Web: mistryvatsal.github.io
 */

#include <iostream>

using namespace std;

struct TreeNode
{
    /* data */
    int val;
    TreeNode *left, *right;
};

class Solution {
    public:

    // Approach 1 : Shorter code.
    int max_depth(TreeNode *root) {
        if(root == NULL) return 0;
        return 1 + max(max_depth(root->left), max_depth(root->right));
    }
};