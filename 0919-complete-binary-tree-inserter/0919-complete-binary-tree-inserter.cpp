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
class CBTInserter {
public:
    TreeNode* r=NULL;
    int l = 0;
    CBTInserter(TreeNode* root) {
        r = root;
    
    }
    
    int insert(int val) {  queue<TreeNode*> q; q.push(r);  while(!q.empty()) { int s = q.size(); bool o = false; for(int i=0;i<s;i++) { TreeNode* a = q.front();  q.pop();  if(a->left) q.push(a->left);  if(a->right) q.push(a->right);   if(a->left == NULL) {  TreeNode* w = new TreeNode(val); a->left = w; return a->val; } else if(a->right == NULL) {  TreeNode* w = new TreeNode(val); a->right = w; return a->val; }     }     }  return -1;  }  TreeNode* get_root() { return r;    }
};

/**
 * Your CBTInserter object will be instantiated and called as such:
 * CBTInserter* obj = new CBTInserter(root);
 * int param_1 = obj->insert(val);
 * TreeNode* param_2 = obj->get_root();
 */