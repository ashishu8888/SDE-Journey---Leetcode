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
    ListNode* swapNodes(ListNode* head, int k) {
        
        int n = 1;
        
        ListNode* curr = head;
        ListNode* curr1 = head;
        
        while(curr!=NULL)
        {
            curr = curr->next;
            n++;
        }
        
        int i = n - k;
        int x = 1;
        
        curr = head;
       //         cout<<n<<endl;
        while(curr!=NULL )
        {
            if(i == x)
            {
             //  cout<< curr->val<<endl;
                break;
                
            }
            else
             curr = curr->next;
             x++;
        }
        
       // cout<<x<<endl;
        x = 1;
        while(curr1!=NULL)
        {
            if(x == k)
            {
                break;
            }
             curr1 = curr1->next;
             //curr = curr->next;
            x++;
        }
        
        if(curr!=NULL and curr1!=NULL)
        {
           // cout<<1<<endl;
            int t = curr->val;
            curr->val = curr1->val;
            curr1->val = t;
        }
        
        
        return head;
        
        
    }
};