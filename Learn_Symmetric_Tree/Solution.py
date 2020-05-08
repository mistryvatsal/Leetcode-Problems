#
# Created on Fri May 08 2020
#
# Title: Leetcode - Learn - Symmetric Tree
#
# Author: Vatsal Mistry
# Web: mistryvatsal.github.io
#

class TreeNode:
    def __init__(self, val, left=None, right=None):
        super().__init__()
        self.val = val
        self.left = left
        self.right = right
    

class isSymmetric:
    def isMirror(self, left_root, right_root):
        if left_root is None and right_root is None: return True
        if left_root and right_root and left_root.val == right_root.val:
            return self.isMirror(left_root.left, right_root.right) and self.isMirror(left_root.right, right_root.left)
        return False
        
    def isSymmetric(self, root):
        if root is None: return True
        return self.isMirror(root.left, root.right)
