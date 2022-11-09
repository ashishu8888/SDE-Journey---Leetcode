class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        /* if head = NULL */
        if(!head) return head;
        /* setting the curr at head */
        ListNode *curr = head;
        while(curr->next){
            /* if curr value == curr next value the we have to delete next value */
            if(curr->val == curr->next->val){
                /* stroing next address for deleting further */
                ListNode *temp = curr->next;
                
                /* changing curr pointer to next of next */
                curr->next = curr->next->next;
                delete temp;
            }
            else curr = curr->next;
        }
        return head;
    }
};