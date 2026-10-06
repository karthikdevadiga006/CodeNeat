class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int minsub=nums[0];
        int sum=nums[0];
        int curr=nums[0];
        int currmax=nums[0];
        int maxsub=nums[0];
        int i=0;
    
        
        for( i=1;i<nums.size();i++)
        {
          curr=min(nums[i],curr+nums[i]);
          minsub=min(minsub,curr);
          currmax=max(nums[i],currmax+nums[i]);
          maxsub=max(maxsub,currmax);
        }
        for( i=1;i<nums.size();i++)
        sum+=nums[i];
        if (maxsub<0)
        return maxsub;
        
        return max(maxsub,sum-minsub);
    }
    
};