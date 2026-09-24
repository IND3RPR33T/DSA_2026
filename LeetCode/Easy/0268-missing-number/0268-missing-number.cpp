class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int predres = 0;
        int actres = 0;
        for(int i = 0;i<nums.size();i++)
        {
            predres = predres + nums[i];
        }
        for(int i = 0;i<=nums.size();i++)
        {
            actres = actres + i;
        }
        return (actres - predres);
        
        
    }
};