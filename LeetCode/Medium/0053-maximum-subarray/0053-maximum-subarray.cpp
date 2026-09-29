class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxi = nums[0];
        for(int right = 0;right<nums.size();right++)
        {
            sum += nums[right];
            maxi = max(sum,maxi);
            if(sum < 0)
            {
                sum = 0;
            }
        }
        return maxi;
    }
};