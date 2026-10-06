class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int nodel=arr[0];
        int onedel=INT_MIN;
        int ans=arr[0];
        int v1=0;
        for(int i=1;i<arr.size();i++)
        {
            int prevnodelete=nodel;
            nodel=max(arr[i],nodel+arr[i]);
            if(onedel==INT_MIN)
            {
              onedel=prevnodelete;
            }
            else
            onedel=max(onedel+arr[i],prevnodelete);
            ans=max(ans,max(nodel,onedel));
        }
        return ans;
    }
};