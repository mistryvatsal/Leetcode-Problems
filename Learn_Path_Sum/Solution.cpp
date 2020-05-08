/*
 * Created on Fri May 08 2020
 *
 * Title: Leetcode - Learn - Path Sum
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
    bool hasPathSum(TreeNode *root, int sum) {
        if(root == NULL) return false;
        else if(root->left == NULL && root->right == NULL) {
            if(root->val == sum) return true;
            return false;
        }
        else{
            sum -= root->val;
            return hasPathSum(root->left, sum) || hasPathSum(root->right, sum);
        }
    }
};
