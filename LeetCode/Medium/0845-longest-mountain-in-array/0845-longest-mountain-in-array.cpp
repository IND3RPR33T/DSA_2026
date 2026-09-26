class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int count = 0;

        for (int i = 1; i < arr.size() - 1; i++) {
            
            
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                
                int p = i - 1;
                int r = i + 1;

                
                while (p > 0 && arr[p - 1] < arr[p]) {
                    p--;
                }

    
                while (r < arr.size() - 1 && arr[r] > arr[r + 1]) {
                    r++;
                }

            
                count = max(count, r - p + 1);
            }
        }

        return count;
    }
};