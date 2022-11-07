class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
        stack<int> a,b;
        vector<int> v;
        
        for(int i=students.size()-1;i>=0;i--)
        {
            a.push(students[i]);
            b.push(sandwiches[i]);
        }
        
         
      
        
        while(1)
        {
            bool is = true;
            while(!a.empty())
            {
                if(a.top() == b.top())
                {
                    is = false;
                    
                    a.pop();
                    b.pop();
                    
                }
                
                
                else if(a.top() != b.top())
                {
                    
                    int x = a.top();
                    a.pop();
                    v.push_back(x);
                    
                }
                
                
                
            }
            
            if(is)
            {
                break;
            }
            
        for(int i=v.size()-1;i>=0;i--)
        {
            a.push(v[i]);
            
        }
           
         v.clear();   
            
        }
        
        return v.size();
        
    }
};