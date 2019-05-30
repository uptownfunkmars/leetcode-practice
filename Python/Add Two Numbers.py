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
