/*
 * Created on Wed May 06 2020
 *
 * Title: Leetcode - Learn - Binary Tree Levelorder Traversal
 *
 * Author: Vatsal Mistry
 * Web: mistryvatsal.github.io
 */

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
};

class Solution {
    public:
    vector<vector<int>> result;
    queue<TreeNode*> bfs_q;
    vector<vector<int>> levelOrder(TreeNode *root) {
        if(root == NULL) return result;

        bfs_q.push(root);
        while(!bfs_q.empty()) {
            int size = bfs_q.size();
            vector<int> curr_list;
            for(int i=0; i<size; ++i) {
                TreeNode *curr = bfs_q.front();
                curr_list.push_back(curr->val);
                bfs_q.pop();

                if(curr->left != NULL) {
                    bfs_q.push(curr->left);
                }

                if(curr->right != NULL) {
                    bfs_q.push(curr->right);
                }

            }
            result.push_back(curr_list);
        }
        return result;
    }
};


//   5
//  / \
//  6  7
//    / \
//    1  2

// [1, 2]

// [
//     [5],
//     [6 , 7], 
//     [1, 2]
// ]