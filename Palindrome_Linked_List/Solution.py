#
# Created on Sat Apr 10 2021
#
# Title: Leetcode - Palindrome Linked List
#
# Author: Vatsal Mistry
# Web: mistryvatsal.github.io
#

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: ListNode) -> bool:
        curr = head
        data = list()
        while curr is not None:
            data.append(curr.val)
            curr = curr.next
        return data == data[::-1]