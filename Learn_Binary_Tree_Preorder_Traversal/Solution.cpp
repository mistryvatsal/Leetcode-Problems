/*
 * Created on Mon May 04 2020
 *
 * Title: Leetcode - Learn - Binary Tree Preorder Traversal
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
    void recursive_pre(TreeNode *root) {
        if(root == NULL) return;
        result.push_back(root->val);
        recursive_pre(root->left);
        recursive_pre(root->right);
    }
    vector<int> preorder(TreeNode *root) {
        recursive_pre(root);
        return result;
    }
};