//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

int countNodesinLoop(Node* head);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        cout<< countNodesinLoop(head) << endl;
    }
	return 0;
}

// } Driver Code Ends


/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
    // Code here
    map<int,int> m;
    
    Node* curr = head;
    int x = 1,ans=0;
    bool loop = true;
    while(curr != NULL)
    {
        if(curr->data == INT_MIN)
        {
            loop = false;
            ans = x;
            break;
        }
        else{
            curr->data = INT_MIN;
            curr = curr->next;
        }
    }
    head = curr;
    if(loop)
    return 0;
    curr = curr->next;
    int v = 1;
    while( curr!= head)
    {
        curr = curr -> next;
        v++;
    }
    //cout<<curr->data<<endl;
    return v;
    
    
}