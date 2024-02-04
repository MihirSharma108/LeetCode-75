class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        bool ans = false;
        int a = INT_MAX,b = INT_MAX,c = INT_MIN;
        for(int i=0; i<n; i++) {
            a=min(a,nums[i]);
            if(a<nums[i]) b=min(b,nums[i]);
            if(b<nums[i]) c=max(c,nums[i]);
            if(a<b && b<c) return true;
        }
        return ans;
    }
};