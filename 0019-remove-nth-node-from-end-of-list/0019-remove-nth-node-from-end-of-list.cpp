/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head,*del = NULL;
        
        int len = 0;
        
        
        while(curr!=NULL)
        {
            curr = curr->next;
            len++;
        }
        if(n == len)
        {
            del = head;
            head = head->next;
            delete del;
            return head;
        }
        
        
        len = len-n-1;
        curr = head;
        for(int i=0;i<len;i++)
        {
            curr = curr->next;
        }
        
        curr->next = curr->next->next;
        delete del;
        
        return head;
        
    }
};