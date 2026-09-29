class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = nums[0];
        int prod = 1;
        int mini = 1;

        for(int right = 0; right < nums.size(); right++)
        {
            int temp = prod;

            prod = max({nums[right], nums[right] * prod, nums[right] * mini});
            mini = min({nums[right], nums[right] * temp, nums[right] * mini});

            maxi = max(prod, maxi);
        }

        return maxi;
    }
};