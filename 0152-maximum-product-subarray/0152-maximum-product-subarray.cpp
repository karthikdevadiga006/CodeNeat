class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mini=nums[0];
        int maxi=nums[0];
        int best=nums[0];
        
        for(int i=1;i<nums.size();i++)
        {
            int v1=nums[i];
            int v2=mini*nums[i];
            int v3=maxi*nums[i];
            maxi=max(v1,max(v2,v3));
            mini=min(v1,min(v2,v3));
            best=max(best,max(maxi,mini));

        }
        return best;
    }
};