class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxsub=nums[0];
        int minsub=nums[0];
        int curr=nums[0];
        
        for(int i=1;i<nums.size();i++)
        {
            curr=max(nums[i],curr+nums[i]);
            maxsub=max(maxsub,curr);
        }
        curr=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            curr=min(nums[i],curr+nums[i]);
            minsub=min(minsub,curr);
        }
        int absmin=abs(minsub);
        int absmax=abs(maxsub);
        int ans=max(absmin,absmax);
return ans;
    }
    
};