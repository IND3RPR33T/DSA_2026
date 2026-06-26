class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> freq;

        freq[0] = 1;

        int currSum = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {

            currSum += nums[i];

            int needed = currSum - k;

            if (freq.find(needed) != freq.end()) {
                count += freq[needed];
            }

            freq[currSum]++;
        }

        return count;
    }
};