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
    ListNode* deleteDuplicates(ListNode* head) {
        
        map<int,int> m;
        
        ListNode* curr = head;
        ListNode* prev = head;
        
        while(curr!=NULL )
        {
           
            if(curr != NULL and m[curr->val] != 0)
            {
                ListNode* temp = curr;
                prev->next = curr->next;
                 curr = curr->next;
                delete temp;
            }
            else{
                 m[curr->val]++;
                  prev = curr;
                curr = curr->next;
            }
          
            
        }
        

        return head;
        
    }
};