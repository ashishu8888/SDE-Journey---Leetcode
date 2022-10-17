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
         ListNode* temp = head;
        int len=0;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        int fromStart = (len-n+1);
        temp=head;
        int idx=0;
        while(temp!=NULL){
            idx++;
            if(idx==fromStart-1 || idx==fromStart){
                ListNode* rem = temp->next;
                if(rem==NULL){
                    rem=temp;
                    return NULL;
                }else{
                    if(fromStart==1){
                        head=temp->next;
                    }else{
                        temp->next=temp->next->next;
                        delete rem;
                    }
                }
                break;
            }
            temp=temp->next;
        }
        return head;
    }
};