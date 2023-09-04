class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        if(!head) return false;
        
        ListNode *slow, *fast;
        slow = fast = head;
        
        do{
            slow=slow->next;
            fast=fast->next;
            if(fast) fast=fast->next;
        }while(fast!=NULL && fast!=slow);
        
        return (fast!=NULL && fast == slow);
    }
};
