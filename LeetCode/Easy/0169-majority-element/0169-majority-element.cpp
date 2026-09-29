class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int , int> mpp;
        int maxfreq = 0;
        int ans;
        
        for(int num:nums)
        {
            mpp[num]++;
        }
        for(auto num : mpp)
        {
            if(num.second > maxfreq)
            {
                maxfreq = num.second;
                ans = num.first;
            }

        }
        return ans;
       
    }
};