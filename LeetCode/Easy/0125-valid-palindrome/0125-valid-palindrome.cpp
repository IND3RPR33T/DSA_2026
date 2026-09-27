class Solution {
public:
    bool isPalindrome(string s) {
        string res = "";
        for(char c : s)
        {
            if(isalnum(c))
            {
                res += tolower(c);
            }
        }

       
        if(res.length() < 2)
        {
            return true;
        }

        for(int i = 0; i < res.length() / 2; i++)
        {
            int left = i;
            int right = res.length() - i - 1;

            if(res[left] != res[right])
            {
                return false;
            }
        }

        return true;
    }
};