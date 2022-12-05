class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        if(root == NULL)
            return {};
        
        queue<TreeNode *> q;
        vector<int> ans;
        int maxi;
        q.push(root);
        
        while(!q.empty()){
            int size = q.size();
            maxi = INT_MIN;
            
            for(int i = 0 ; i < size ; i++){
                TreeNode *temp = q.front();
                q.pop();
                maxi = max(maxi , temp->val);
                
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            
            ans.push_back(maxi);
        }
        
        return ans;
    }
};