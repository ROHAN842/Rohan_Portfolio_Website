class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* before = new ListNode(0);
        ListNode* after = new ListNode(0);
        ListNode* temp_before = before;
        ListNode* temp_after = after;
        while(head!=NULL){
            if(head->val < x){
                temp_before->next = head;
                temp_before = head;
            }
            else {
                 temp_after->next = head;
                temp_after = head;
            }
            head = head->next;
        }
        temp_after->next = NULL;
        temp_before->next = after->next;
        return before->next;
    }
};