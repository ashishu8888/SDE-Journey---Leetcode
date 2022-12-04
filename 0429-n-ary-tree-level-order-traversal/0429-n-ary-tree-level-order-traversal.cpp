/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        
        
        
         vector<vector<int>> v;
        if(!root)
        {
            return v;
        }
        queue<Node*> q;
        
        q.push(root); 
        
        while(!q.empty())
        {
            vector<int> w;
            int s = q.size();
            
            for(int i=0;i<s;i++)
            {
                
                Node* d = q.front();
                q.pop();
                w.push_back(d->val);
                
                if( d->children.size() != 0)
                {
                    vector<Node*> c = d->children;
                
                for(int k=0;k<c.size();k++)
                {
                    q.push(c[k]);
                }
                    
                }
                
                
                
                
            }
            
            v.push_back(w);
            
            
        }
        
        return v;
        
        
    }
};