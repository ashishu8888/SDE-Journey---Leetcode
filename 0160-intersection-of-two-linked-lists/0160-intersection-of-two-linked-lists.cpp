/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include<bits/stdc++.h>
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* curr = headA;
        map<const ListNode *,int> m;
        while(curr!=NULL)
        {
            m[curr]++;
            curr = curr->next;
        }
        
        curr = headB;
        
        while(curr!=NULL)
        {
            if(m[curr])
            {
                return curr;
            }
            curr=curr->next;
        }
        
        return NULL;
        
    }
};