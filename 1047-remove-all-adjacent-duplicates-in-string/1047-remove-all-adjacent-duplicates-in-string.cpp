class Solution {
public:
    string removeDuplicates(string s) {
        
        stack<char> st;
        
        st.push(s[0]);
        
       for(int i=1;i<s.size();i++)
       {
           
           if(!st.empty() and s[i] == st.top())
           {
               st.pop();
           }
           else{
               st.push(s[i]);
           }
           
       }
        
        string a = "";
        
        while(!st.empty())
        {
            a = st.top() + a;
            st.pop();
        }
        
        return a;
        
    }
};