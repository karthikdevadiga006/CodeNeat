class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int n=s.size();
        int low=0;
        int ans=0;
        int high=0;
        for(int high=0;high<n;high++)
        {
            mp[s[high]]++;
            while(mp[s[high]]>1)
            {
                mp[s[low]]--;
                if(mp[s[low]]==0)
                mp.erase(s[low]);
                low++;
            }
            ans=max(ans,high-low+1);
        }
        
    return ans;
    }
};