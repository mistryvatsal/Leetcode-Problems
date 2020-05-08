/*
 * Created on Fri May 08 2020
 *
 * Title: Leetcode - Learn - Symmetric Tree
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

class Solution
{
    public:
    bool isMirror(TreeNode *left_root, TreeNode *right_root) {
        if(left_root == NULL && right_root == NULL) return true;
        if(left_root && right_root && left_root->val == right_root->val) {
            return isMirror(left_root->right, right_root->left) && isMirror(left_root->left, right_root->right);
        }
        return false;
    }
    bool isSymmetric(TreeNode *root) {
        if(root == NULL) return true;
        isMirror(root->left, root->right);
    }

};

