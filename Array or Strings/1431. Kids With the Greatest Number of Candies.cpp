class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxiCan = INT_MIN;
        for(auto i: candies) {
            maxiCan = max(maxiCan, i);
        }
        vector<bool> v;
        for(auto i: candies) {
            if((i+extraCandies)>=maxiCan) v.push_back(true);
            else v.push_back(false);
        }
        return v;
    }
};
