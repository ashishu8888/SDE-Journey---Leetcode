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
    void deleteNode(ListNode* node) {
        ListNode* dl = node->next;
        
        // cout<<node->val<<endl;
        node->val = node->next->val;
        node->next = dl->next;
        
        delete dl;
        
        
        
    }
};