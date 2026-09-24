class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map <int,int> mpp;
        int ans;
        for(int i = 0;i<=nums.size();i++)
        {
            mpp[i] = 0;
        }
        for(int i = 0;i<nums.size();i++)
        {
            mpp[nums[i]] = 1;
        }
        for(int i = 0;i<=nums.size();i++)
        {   if(mpp[i] == 0)
        {
            ans =  i;
        }

            
        }
        return ans;
        
    }
};