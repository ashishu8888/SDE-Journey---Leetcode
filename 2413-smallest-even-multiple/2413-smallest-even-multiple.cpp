class Solution {
public:
   int smallestEvenMultiple(int n) {
    
    for(int i=1;i<=150;i++)
    {
        int mul = n*i;
        if(mul % 2 == 0 && mul % i == 0)return mul;
    }
    return -1;
}
};