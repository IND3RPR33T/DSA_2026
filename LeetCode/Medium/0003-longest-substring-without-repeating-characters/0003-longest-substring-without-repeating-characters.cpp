class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mpp;
       int  left = 0;
        int maxi = 0;
        for(int right = 0;right<s.length();right++)
        {
            mpp[s[right]]++;
            while(mpp[s[right]]>1)
            {
                mpp[s[left]]--;
                left++;
            }
            maxi = max(maxi,right - left+1);
        }
        return maxi;
    }
};