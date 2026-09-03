class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int low=0;
        int n=s.size();
        int high=0;
        int ans=0;
        int maxfreq=0;
        for(high =0;high<n;high++)
        {
            mp[s[high]]++;
            maxfreq=max(maxfreq,mp[s[high]]);
            while((high-low+1)-maxfreq>k)
            {
                mp[s[low]]--;
                low++;
            }
            ans=max(ans,high-low+1);
        }
        return ans;
    }
};