class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();    //inputting the size of the nums in n
        vector<int> ans(n);    //creation of vector array "ans" to store the ans in the array form
        vector<int> left_Product(n);  //creation of the arr left_Product
        vector<int> right_Product(n); //creation of the arr right_Product
        left_Product[0] = 1;
        for(int i=1; i<n; i++){
            left_Product[i] = left_Product[i-1] * nums[i-1];
        }
        right_Product[n-1] = 1;
        for(int i=n-2; i>=0; i--){        //Loop 1
            right_Product[i] = right_Product[i+1] * nums[i+1];
        }
        for(int i=0; i<n; i++){           //Loop2
            ans[i] = left_Product[i] * right_Product[i];
        }
        return ans;  
    }
};
