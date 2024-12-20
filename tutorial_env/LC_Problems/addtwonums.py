from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        carry=0
        dummy = ListNode(0)
        current = dummy
        while(l1!=None or l2!=None or carry!=0):
            if (l1!=None): num1 = l1.val
            else: num1 = 0
            if (l2!=None): num2 = l2.val
            else: num2 = 0

            sum = num1 + num2 + carry

            carry = sum//10

            current.next = ListNode(sum%10)
            current = current.next

            if(l1!=None) : l1=l1.next
            if(l2!=None) : l2=l2.next
            
        return dummy.next
            