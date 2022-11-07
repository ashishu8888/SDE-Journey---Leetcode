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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* nhead = new ListNode();
        
        ListNode* hh = nhead;
        
        ListNode* curr = head;
        int i = 1,sum=0;
        
        while(curr!=NULL)
        {
            if(curr->val == 0)
            {
                
             if(i>=2)
             {
                  ListNode* n = new ListNode(sum);
                 nhead->next = n;
                 nhead = nhead->next;
                 sum = 0;
             }
              i++;
                
            }
            
            sum += curr->val;
            curr = curr->next;
        }
        return hh->next;
    }
};