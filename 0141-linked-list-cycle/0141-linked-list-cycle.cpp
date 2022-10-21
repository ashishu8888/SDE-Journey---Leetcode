/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* curr = head;
        map<int,int> m;
        while(curr != NULL)
        {
         if(curr->val == INT_MIN)
         {
             return true;
         }
            else {
                curr->val = INT_MIN;
                curr = curr->next;
            }
        }
        
      /////////////////  cout<<pos<<endl;
        
        return false;
    }
};
