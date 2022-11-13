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
#include <cstdlib>
class Solution {
public:
    int x = 0;
    ListNode* Head = NULL;
    Solution(ListNode* head) {
        Head = head;
       
    }
    
    int getRandom() {
        int ans = 0, i = 1;
        ListNode *p = this->Head;
        while (p) {
            if (rand() % i == 0) ans = p->val; // replace ans with i-th node.val with probability 1/i
            i ++;
            p = p->next;
        }
        return ans;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */