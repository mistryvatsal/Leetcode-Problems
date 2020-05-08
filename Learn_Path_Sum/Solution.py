#
# Created on Fri May 08 2020
#
# Title: Leetcode - Learn - Path Sum
#
# Author: Vatsal Mistry
# Web: mistryvatsal.github.io
#

class TreeNode:
    def __init__(self, val, left, right):
        super().__init__()
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def hasPathSum(self, root, summ):
        if root is None:
            return False
        elif root.left is None and root.right is None:
            if root.val == summ: return True
            return False
        else:
            summ -= root.val
            return self.hasPathSum(root.left, summ) or self.hasPathSum(root.right, summ)
