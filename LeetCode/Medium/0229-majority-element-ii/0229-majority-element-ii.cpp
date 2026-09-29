class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int lim = nums.size() / 3;
       unordered_map<int,int> mpp;
       
        for(int num:nums)
        {
            mpp[num]++;
        }
        for(auto num :mpp)
        {
           if(num.second > lim)
           {
             ans.push_back(num.first);
           }
        }
        return ans;
    }

};