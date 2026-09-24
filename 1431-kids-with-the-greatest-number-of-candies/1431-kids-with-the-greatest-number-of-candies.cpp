class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>arr;
        int lar=candies[0];
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]>lar)
            lar=candies[i];
        }
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=lar)
            arr.push_back(true);
            else
            arr.push_back(false);
        }
        return arr;
    }
};