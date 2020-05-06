/*
 * Created on Wed May 06 2020
 *
 * Title: Leetcode - Learn - Binary Tree Inorder Traversal
 *
 * Author: Vatsal Mistry
 * Web: mistryvatsal.github.io
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
    };
    vector<int> result;
    void recursive_in(TreeNode *root) {
        if(root == NULL) return;
        
        recursive_in(root->left);
        result.push_back(root->val);
        recursive_in(root->right);
    }
    vector<int> inorder(TreeNode *root) {
        recursive_in(root);
        return result;
    }
};