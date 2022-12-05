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
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        if(!root1 and !root2)
        {
            return true;
        }
        else if(!root1 and root2 || !root2 and root1)
        {
            return false;
        }
        if(root1->val != root2->val)
        {
            return false;
        }
        if(!root1->left and !root1->right and !root2->left and !root2->right)
        {
            return true;
        }
        else if(!root1->left and !root2->left)
        {
            return flipEquiv(root1->right,root2->right);
        }
        else if(!root1->right and !root2->right)
        {
            return flipEquiv(root1->left,root2->left);
        }
        else if(!root1->left and !root2->right)
        {
         return flipEquiv(root1->right,root2->left);
        }
        else if(!root1->right and !root2->left)
        {
           return flipEquiv(root1->left,root2->right);
        }
        else if(!root1->left and root2->left || !root2->left and root1->left )
        {
            return false;
        }
        else if(!root1->right and root2->right || !root2->right and root1->right)
        {
            return false;
        }
        
        if(root1->left->val == root2->left->val and root1->right->val == root2->right->val)
        {
            cout<<"yes"<<endl;
            return flipEquiv(root1->left,root2->left) and flipEquiv(root1->right,root2->right);
        }
        else if(root1->left->val == root2->right->val and root1->right->val == root2->left->val)
        {
            return flipEquiv(root1->left,root2->right) and flipEquiv(root1->right,root2->left);
        }
        
        else {
            return false;
        }
        
    }
};