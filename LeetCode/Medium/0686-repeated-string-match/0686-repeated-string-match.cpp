class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int count = (b.size() + a.size() - 1) / a.size();

        string s = "";
        for (int i = 0; i < count + 1; i++)
            s += a;

        for (int i = 0; i <= s.size() - b.size(); i++) {
            int j = 0;
            while (j < b.size() && s[i + j] == b[j])
                j++;

            if (j == b.size()) {
                if (i + b.size() <= count * a.size())
                    return count;
                else
                    return count + 1;
            }
        }

        return -1;
    }
};