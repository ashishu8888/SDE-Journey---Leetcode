/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    map<int,int> l;
    map<int,int> r;
    TreeNode* as(int x)
    {
        
        
        TreeNode* root = new TreeNode(x);
        
        // for(int i=0;i<d.size();i++)
        // {
        //     if(d[i][0] == x)
        //     {
        //         if(d[i][2] == 1)
        //         {
        //             root->left = as(d,d[i][1]);
        //         }
        //         else if(d[i][2] == 0)
        //         {
        //             root-> right = as(d,d[i][1]);
        //         }
        //     }
        // }
        
//         for(auto x  : a)
//             cout<<x<<endl;
        
        
        
        if(r[x] != 0)
        {
            root->right = as(r[x]);
           //cout<<r[x]<<endl;
        }
         if(l[x]!=0)
        {
            root->left = as(l[x]);
            //cout<<l[x]<<endl;
        }
        
        return root;
        
        
        
    }
    
    TreeNode* createBinaryTree(vector<vector<int>>& d) {
        
       
        
        map<int,int> m;
        int p = -1;
        
        for(int i=0;i<d.size();i++)
        {
            m[d[i][1]]++;
            
            if(d[i][2] == 0)
            {
                r[d[i][0]] = d[i][1];
               // cout<< r[d[i][0]] <<endl;
            }
            
            else if(d[i][2] == 1)
            {
                l[d[i][0]] = d[i][1];
               //cout<< l[d[i][0]]<<endl;
                
            }
            
            
            
        }
        
        
        for(int i=0;i<d.size();i++)
        {
            if(m[d[i][0]] == 0)
            {
                p = d[i][0];
                break;
            }
        }
        
       //cout<< a[50].first;
        
      return as(p);
        
        
    }
};