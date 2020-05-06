/*
 * Created on Wed May 06 2020
 *
 * Title: Leetcode - Learn - Binary Tree Postorder Traversal
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
    void recursive_post(TreeNode *root) {
        if(root == NULL) return;
        
        recursive_post(root->left);
        recursive_post(root->right);
        result.push_back(root->val);
    }
    vector<int> postorder(TreeNode *root) {
        recursive_post(root);
        return result;
    }
};