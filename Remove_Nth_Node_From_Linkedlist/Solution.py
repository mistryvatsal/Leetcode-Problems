#
# Created on Fri Apr 18 2021
#
# Title: Leetcode - Remove Nth node from end of linked list
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
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
        first = second = head
        for i in range(n):
            if second.next is None:
                head = head.next
                return head
            second = second.next
        while second.next is not None:
            second = second.next
            first = first.next
        first.next = first.next.next
        return head
            