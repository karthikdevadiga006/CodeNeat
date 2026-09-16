class Solution {
public:
int SquareSum(int n)
        {
             int sum=0;
            while(n>0)
            {
           
            int digit=n%10;
            sum=sum+(digit*digit);
            n=n/10;
            }
            return sum;
        }
    bool isHappy(int n) {
        int slow=n;
        int fast=n;
       
        while(true)
        {
            slow=SquareSum(slow);
            fast=SquareSum(fast);
            fast=SquareSum(fast);
        
        if(fast==1)
        return true;
         else if (slow==fast)
        return false;
        }

    }
};