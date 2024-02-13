class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxiCan = INT_MIN;    //here we are storing the maxican with the minimum integer value possible because we have to find the maximum one 
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
