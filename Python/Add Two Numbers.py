# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

#python中的指针与C语言由很大不同，python中直接用变量名称代表地址。
#例如：
#L1 = ListNode(1)      
#p = ListNode(2)  
#L1.next = p       <==> C语言中的指针操作


class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        l3 = None
        head = l3
        p = l1
        q = l2;
        
        g = 0
        s = 0
        while p!=None and q!=None:
            g = (p.val + q.val + s) % 10
            s = (p.val + q.val + s) / 10
            newnode = ListNode(g)
             
            if l3 != None:
                head.next = newnode
                head = newnode
            else:
                l3 = newnode
                head = l3
            
            p = p.next
            q= q.next
        
        while(p != None):
        
            g = (p.val + s) % 10
            s = (p.val + s) / 10
            newnode = ListNode(g)
             
            if l3 != None:
                head.next = newnode
                head = newnode
            else:
                l3 = newnode
                head = l3
            
            p = p.next
            
        while(q != None):
            g = (q.val + s) % 10
            s = (q.val + s) / 10
            newnode = ListNode(g)
             
            if l3 != None:
                head.next = newnode
                head = newnode
            else:
                l3 = newnode
                head = l3
            
            q = q.next
        
        if s != 0 :
            newnode = ListNode(s)
            head.next = newnode
        
        return l3
