#
# Created on Fri May 08 2020
#
# Title: Leetcode - Learn - Maximum Depth of Binary Tree
#
# Author: Vatsal Mistry
# Web: mistryvatsal.github.io
#

# Definition of Tree Node.
class TreeNode:
    def __init__(self, val, left=None, right=None):
        super().__init__()
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def maxDepth(self, root):
        if root is None: return 0
        return 1 + max(self.maxDepth(root.left), self.maxDepth(root.right))