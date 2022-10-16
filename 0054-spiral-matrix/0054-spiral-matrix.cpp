class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        int top = 0;
        int bottom = m.size()-1;
        int left = 0;
        int right = m[0].size()-1;
        vector<int> v;
        int s = m.size() * m[0].size();
        
        while(v.size()<s)
        {
            for(int i=left;i<=right&&v.size()<s;i++)
            {
                v.push_back(m[top][i]);
            }
            top++;
            for(int i = top ; i<= bottom &&v.size()<s; i++)
            {
                v.push_back(m[i][right]);
            }
            right--;
            for(int i=right ; i>= left&&v.size()<s ; i--)
            {
                v.push_back(m[bottom][i]);
            }
            bottom--;
            for(int i=bottom;i>=top&&v.size()<s;i--)
            {
                v.push_back(m[i][left]);
            }
            left++;
        }
        return v;
    }
};