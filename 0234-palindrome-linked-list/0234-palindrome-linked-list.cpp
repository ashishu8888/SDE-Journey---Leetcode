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
    
bool isPalindrome(string S)
{
    // Stores the reverse of the
    // string S
    string P = S;
 
    // Reverse the string P
    reverse(P.begin(), P.end());
 
    // If S is equal to P
    if (S == P) {
        // Return "Yes"
        return true;
    }
    // Otherwise
    else {
        // return "No"
        return false;
    }
}

    bool isPalindrome(ListNode* head) {
        int x = 0;
        ListNode* curr = head;
        string s = "";
        while(curr!=NULL)
        {
             string a = to_string(curr->val);
            curr = curr->next;
          
            s += a;
            x++;
        }
        
        
   
        return isPalindrome(s);
        
        
        
        
        
    }
};