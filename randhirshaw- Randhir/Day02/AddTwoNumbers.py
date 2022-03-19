class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        temp = ListNode(0)
        ptr1 = l1; ptr2 = l2
        curr = temp; carry = 0      
        while ptr1 or ptr2:
            x = ptr1.val if ptr1 else 0
            y = ptr2.val if ptr2 else 0
            s = x+y+carry
            carry = s//10
            curr.next = ListNode(s%10)
            curr = curr.next
            if ptr1:
                ptr1 = ptr1.next
            if ptr2:
                ptr2 = ptr2.next      
        if carry:
            curr.next = ListNode(carry)      
        return temp.next 
