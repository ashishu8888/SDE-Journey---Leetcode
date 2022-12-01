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
class FindElements {
public:
    bool found = false;
    map<int,int> m;
   void in(TreeNode * root)
    {
        if(!root)
            return ;
       
        if(root->left)
        {
            root->left->val = 2*(root->val) + 1;
            m[root->left->val] = 1;
        }
        if(root->right)
        {
             root->right->val = 2*(root->val) + 2;
             m[root->right->val] = 1;
        }
       
        in(root->left);
       
        in(root->right);
        
        
    }
    
//     void in(TreeNode* root,int x)
//     {
//         if(!root)
//         {
//             return ;
//         }
        
//         in(root->left);
//         if(root->val == x)
//         {
//             found = true;
//         }
//         in(root->right);
        
        
//     }
    
    FindElements(TreeNode* root) {
        //v.push_back(0);
        m[0] = 1;
        root->val = 0;
        in(root);
        
        
    }
    
    bool find(int target) {
        
       return m[target];
        
        
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */