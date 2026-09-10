class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp;
        for(char c:t)
        mp[c]++;
        int left=0;
        int right=0;
        int start=0;
        int count=t.size();
        int minLen=INT_MAX;
        while(right<s.size())
        {
            if(mp[s[right]]>0)
            {
                count--;
            }
            mp[s[right]]--;
            right++;
            while(count==0)
            {
                if(right-left<minLen)
                {
                    minLen=right-left;
                    start=left;
                }
                mp[s[left]]++;
                if(mp[s[left]]>0)
                count++;
                left++;
            }
        }
        if(minLen==INT_MAX)
        return "";
         return s.substr(start, minLen);

    }
};