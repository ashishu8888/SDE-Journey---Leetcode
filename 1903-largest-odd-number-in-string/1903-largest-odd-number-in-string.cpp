class Solution {
public:
    string largestOddNumber(string num) {
        string s = "";
        for(int i=num.size()-1;i>=0;i--)
        {
            int x = num[i]-'0';
            if(x%2)
            {
                s = num.substr(0,i+1);
                
                return s;
            }
        }
        return "";
    }
};
